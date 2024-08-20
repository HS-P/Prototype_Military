from nav_msgs.msg import Odometry
from geometry_msgs.msg import Twist

from prototype_msg.action import Odometryaction

import rclpy as rp

from rclpy.executors import MultiThreadedExecutor
from rclpy.action import ActionServer
from rclpy.node import Node

import time
import math

def quaternion_to_euler(x, y, z, w):

    t0 = +2.0 * (w * x + y * z)
    t1 = +1.0 - 2.0 * (x * x + y * y)
    roll = math.atan2(t0, t1)
    
    t2 = +2.0 * (w * y - z * x)
    t2 = +1.0 if t2 > +1.0 else t2
    t2 = -1.0 if t2 < -1.0 else t2
    pitch = math.asin(t2)
    
    t3 = +2.0 * (w * z + x * y)
    t4 = +1.0 - 2.0 * (y * y + z * z)
    yaw = math.atan2(t3, t4)
    
    return roll, pitch, yaw

class PositionSubscriber(Node):
    def __init__(self):
        super().__init__('position_subscriber')
        self.subscription = self.create_subscription(
            Odometry,
            '/odom',
            self.callback,
            10)
        
    def callback(self, msg):
        position = msg.pose.pose.position
        
        orientation_q = msg.pose.pose.orientation
        x = orientation_q.x
        y = orientation_q.y
        z = orientation_q.z
        w = orientation_q.w

        (roll, pitch, yaw) = quaternion_to_euler(x,y,z,w)
        
class Action(PositionSubscriber):
    def __init__(self, acsv):
        super().__init__()
        self.acsv = acsv
        
    def callback(self, msg):
        super().callback(msg)
        self.acsv.current_pose = msg.pose.pose.position
        self.acsv.update_distance(self.acsv.current_pose)
        
        self.acsv.current_yaw = msg.pose.pose.orientation
        self.acsv.update_yaw(self.acsv.current_yaw)
        
class Server(Node):
    
    def __init__(self):
        super().__init__('action_server')
        
        self.total_dist = 0
        self.is_first_time = True
        
        self.current_pose = Odometry
        self.previous_pose = Odometry
        
        self.current_yaw = Odometry
        self.previous_yaw = Odometry
        
        self.publisher = self.create_publisher(Twist, 'cmd_vel', 10)
        self.action_server = ActionServer(self, Odometryaction, 'odometry', self.execute_callback)
        
    def update_distance(self, position):
        if self.is_first_time:
            self.current_pose = position
            self.previous_pose = position
            self.is_first_time = False
        
        self.current_pose = position 
        diff_dist = math.sqrt((self.current_pose.x - self.previous_pose.x)**2 +\
                              (self.current_pose.y - self.previous_pose.y)**2)
        
        self.previous_pose = self.current_pose
        self.total_dist += diff_dist  # 총 거리 업데이트
        
        return diff_dist
    
    def update_yaw(self, current_yaw):
        if self.is_first_time:
            self.current_yaw = orientation_q
            self.previous_yaw = orientation_q
            self.is_first_time = False
        
        self.current_yaw = orientation_q
        self.previous_yaw = self.current_yaw
        
        orientation_q = self.current_yaw.orientation
        (roll, pitch, current_yaw) = quaternion_to_euler(orientation_q.x, orientation_q.y, orientation_q.z, orientation_q.w)
        yaw_diff = (yaw_diff + math.pi) % (2 * math.pi) - math.pi
        
        return yaw_diff
    
    def execute_callback(self, goal_handle):
        feedback_msg = Odometryaction.Feedback()
        
        msg = Twist()
        
        dx = goal_handle.request.finish_x - self.current_pose.x
        dy = goal_handle.request.finish_y - self.current_pose.y
        
        distance = math.sqrt(dx**2 +dy**2)
        target_theta = math.atan2(dy, dx)
        orientation_q = self.current_yaw.orientation
        (roll, pitch, current_yaw) = quaternion_to_euler(orientation_q.x, orientation_q.y, orientation_q.z, orientation_q.w)
        
        yaw_diff = target_theta - current_yaw

        #Getting Yaw Value
        yaw_diff = self.update_yaw()
        
        #Getting Feedback Value (Include Initial Value)
        msg.linear.x = goal_handle.request.linear_x
        self.publisher.publish(msg)
        
        while (feedback_msg.diff_lin < 0.15):
            
            ## Angular Part ##
            orientation_q = self.current_yaw.orientation
            (roll, pitch, current_yaw) = quaternion_to_euler(orientation_q.x, orientation_q.y, orientation_q.z, orientation_q.w)
            yaw_diff = target_theta - current_yaw
            yaw_diff = (yaw_diff + math.pi) % (2 * math.pi) - math.pi
            
            ## Linear Part ##
            dx = goal_handle.request.finish_x - self.current_pose.x
            dy = goal_handle.request.finish_y - self.current_pose.y
            
            new_distance = math.sqrt(dx**2 + dy**2)
            
            #Feedback on
            feedback_msg.diff_lin = abs(distance)
            feedback_msg.diff_ang = abs(yaw_diff)
        
            goal_handle.publish_feedback(feedback_msg)
            
            if(abs(yaw_diff > 0.1)):
                msg.angular.z = max(min(yaw_diff, 1.0), -1.0)
                msg.linear.x = 0
                self.publisher.publish(msg)
                print("rotating")
                time.sleep(0.1)
                
            if(distance > new_distance):
                distance = new_distance
                msg.linear.x = goal_handle.request.linear_x
                msg.angular.z = 0.0
                self.publisher.publish(msg)
                print("straight")
                time.sleep(0.1)
            
            if(distance <= new_distance):
                distance = new_distance
                msg.angular.z = max(min(yaw_diff, 0.5), -0.5)
                msg.linear.x = 0
                self.publisher.publish(msg)
                print("slow rotating")
                time.sleep(0.1) 
            

        msg.angular.z = 0.0
        msg.linear.x = 0.0
        self.publisher.publish(msg)
        
        goal_handle.succeed()
        result = Odometryaction.Result()
        result.pos_x = self.current_pose.x
        result.pos_y = self.current_pose.y
        result.result_dist = self.total_dist
        return result
        
def main(args=None):
    rp.init(args=args)
    
    executor = MultiThreadedExecutor()
    
    ac = Server()
    sub = Action(acsv = ac)
    
    executor.add_node(sub)
    executor.add_node(ac)
    
    try:
        executor.spin()
    
    finally:
        sub.destroy_node()
        ac.destroy_node()
        rp.shutdown()

if __name__ == '__main__':
    main()