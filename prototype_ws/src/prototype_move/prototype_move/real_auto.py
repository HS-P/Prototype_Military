# Odometry, Twist, LaserScan Data

from nav_msgs.msg import Odometry
from geometry_msgs.msg import Twist
from sensor_msgs.msg import LaserScan

## rclpy setup ** Essential ## 
import rclpy as rp

## Multithread, Action, Node Making ##
from rclpy.executors import MultiThreadedExecutor
from rclpy.action import ActionServer
from rclpy.node import Node

from prototype_msg.action import Movefeedback

## Qos Setup ##
from rclpy.qos import QoSProfile
from rclpy.qos import qos_profile_sensor_data

## Sub Tools Setup ##
import time
import math

def calc_errors(cur_pos, goal, cur_yaw):
    delta_y_ref = goal[1] - cur_pos.y
    delta_x_ref = goal[0] - cur_pos.x
    
    if ((goal[0] == 0. ) and (goal[1] == 0.)):
        e_s = 0. ## for rotating only  
    else:
        goal[2] = math.atan2(delta_y_ref, delta_x_ref)
        e_s = math.sqrt(delta_x_ref**2 + delta_y_ref**2) * \
            math.cos( math.atan2 (delta_y_ref, delta_x_ref) - cur_yaw)
        e_theta = goal[2] - cur_yaw
    return e_s, e_theta

def euler_from_quaternion(x, y, z, w):
    t0 = +2.0 * (w * x + y * z)
    t1 = +1.0 - 2.0 * (x * x + y * y)
    roll_x = math.atan2(t0, t1)

    t2 = +2.0 * (w * y - z * x)
    t2 = +1.0 if t2 > +1.0 else t2
    t2 = -1.0 if t2 < -1.0 else t2
    pitch_y = math.asin(t2)

    t3 = +2.0 * (w * z + x * y)
    t4 = +1.0 - 2.0 * (y * y + z * z)
    yaw_z = math.atan2(t3, t4)

    return roll_x, pitch_y, yaw_z

class PID(Node):
    def __init__(self):
        super().__init__('pin_node')
        self.P = 0.8
        self.I = 0.001
        self.max_state = 0.0
        self.min_state = 0.0
        self.pre_state = 0.0
        self.dt = 0.0
        self.integrated_state = 0.0
        self.pre_time = self.get_clock().now()
        
    def process(self, state):
        self.dt = self.get_clock().now() - self.pre_time       # time diff
        state_I = state + self.integrated_state         # state + constant
        out = self.P*state + self.I*state_I * self.dt   # output

        if out > self.max_state:
            out = self.max_state
        elif out < self.min_state:
            out = self.min_state

        self.pre_state = state
        self.integrated_state = state_I
        self.pre_time = self.get_clock().now()

        return out


#Modifed_Scan

class real_autodrive(Node):
    def __init__(self):
        super().__init__('real_drive')
        
        self.linear_velocty = 0.0
        self.angular_velocty = 0.0
        self.scan_data = []
        self.init_scan_state = False
        self.yaw = 0.0
        
        #Publishing
        self.cmd_vel_pub = self.create_publisher(
            Twist,
            'cmd_vel', 
            10)
        
        #Subscribing
        self.scan_sub = self.create_subscription(
            LaserScan,
            '/modified_scan',
            self.scan_callback,
            qos_profile=qos_profile_sensor_data)
        
        self.subscription = self.create_subscription(
            Odometry,
            '/odom',
            self.odom_callback,
            10)
        
        #Action SERVER
        self.action_server = ActionServer(
            self, 
            Movefeedback, 
            'move_feedback',
            self.execute_callback)

        
    def scan_callback(self, msg):
        self.scan_data = msg.ranges
        self.init_scan_state = True
            
    def odom_callback(self, msg):
        self.position = msg.pose.pose.position
        self.q = msg.pose.pose.orientation
        _, _, self.yaw = euler_from_quaternion(self.q.x, self.q.y, self.q.z, self.q.w)
        
    def execute_callback(self, goal_handle):
        self.get_logger().info("Goal")
        
        feedback_msg = Movefeedback.Feedback()
        target_position = [goal_handle.request.target_x, goal_handle.request.target_y, 0]
        
        theta_PID = PID()
        theta_PID.P =0.8
        theta_PID.I = 0.001
        theta_PID.max_state =0.5
        theta_PID.min_state =-0.5
        
        translation_PID = PID()
        translation_PID.P =0.4
        translation_PID.I =0.01
        translation_PID.max_state =0.2
        translation_PID.min_state =-0.2
        
        while rp.ok():
            current_position = self.position
            # quaternion -> euler(pi angle)
            e_s, e_theta = calc_errors(current_position, target_position, self.yaw)

            cmd_vel_msg = Twist()
            cmd_vel_msg.angular.z = theta_PID.process(e_theta)
            cmd_vel_msg.linear.x = translation_PID.process(e_s)
            
            feedback_msg.error_s = e_s
            feedback_msg.error_theta = e_theta
            goal_handle.publish_feedback(feedback_msg)
            self.cmd_vel_pub.publish(cmd_vel_msg)
            
            self.get_logger().info(f"e_s: {e_s}, e_theta: {e_theta}")
            
            if e_s < 0.1:
                break
            
        self.stop()
        
        goal_handle.succeed()
        result = Movefeedback.Result()
        result.pos_x = current_position.x
        result.pos_y = current_position.y
        
        return result
            
    def stop(self):
        msg = Twist()
        msg.linear.x = 0.0
        msg.angular.z = 0.0
        self.cmd_vel_pub.publish(msg)
        
def main(args=None):
    rp.init(args=args)
    
    #Declaration
    executor = MultiThreadedExecutor()
    
    #Set
    drive = real_autodrive()
    
    #Get in the folder
    executor.add_node(drive)
    
    try:
        executor.spin()

    finally:
        drive.destroy_node()
        rp.shutdown()
    
if __name__ == '__main__':
    main()
    