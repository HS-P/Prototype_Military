
from nav_msgs.msg import Odometry
from geometry_msgs.msg import Twist

from prototype_msg.action import Odometryaction
from matplotlib import pyplot as plt

import rclpy as rp
import numpy as np
import threading

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

def saturation_function(ki, z):
        h = ki * math.tanh(z)
        return h

def tracking_error(x_r, y_r, theta_r, x, y, theta):
        A = np.array([
            [np.cos(theta), np.sin(theta), 0],
            [-np.sin(theta), np.cos(theta), 0],
            [0, 0, 1]
        ])
        B = np.array([
            [x_r - x],
            [y_r - y],
            [theta_r - theta]
        ])
        
        C = np.dot(A, B)
        
        return C[0], C[1], C[2]

class DWMR_CONTROL(Node):
        def __init__(self):
            
            super().__init__('position_subscriber')
            
            # User Setting Value
            self.k1 = 0.1
            self.k2 = 0.2
            self.k3 = 0.2
            self.c = 0.5
            self.w_max = 1.8343
            
            self.x_r = 0
            self.y_r = 0
            self.theta_r = 0
            self.v_r = 0.1
            self.w_r = 0.3
            
            self.yaw = 0.0
            
            
            self.time_elapsed = 0.0
            self.x_errors = []
            self.y_errors = []
            self.theta_errors = []
            self.times = []
            
            self.cmd_vel_pub = self.create_publisher(
                Twist,
                'cmd_vel',
                10)
            
            self.subscription = self.create_subscription(
                Odometry,
                '/odom',
                self.odom_callback,
                10)
            
            self.odom_pub = self.create_publisher(
                Odometry,
                '/odom',
                10)
            
            odom_reset = Odometry()
            
            odom_reset.pose.pose.position.x = 0.0
            odom_reset.pose.pose.position.y = 0.0
            odom_reset.pose.pose.orientation.z = 0.0
            
            self.odom_pub.publish(odom_reset)
            
        def odom_callback(self, msg):
            
            self.position = msg.pose.pose.position
            self.q = msg.pose.pose.orientation

            (_, _, self.yaw) = quaternion_to_euler(self.q.x, self.q.y, self.q.z, self.q.w)
            
            
            x_e, y_e, theta_e = tracking_error(self.x_r, self.y_r, self.theta_r,
                                                self.position.x, self.position.y ,self.yaw)
            
            self.x_errors.append(x_e)
            self.y_errors.append(y_e)
            self.theta_errors.append(theta_e)
            self.times.append(self.time_elapsed)
            self.time_elapsed += 0.1
            
            pi = y_e - 0.028 * math.sin(theta_e)
            psi = x_e + 0.028 * math.cos(1-math.cos(theta_e))
                
            v_ref = self.v_r * math.cos(theta_e)
            v_stab = saturation_function(self.k1,psi)
            w_ref = self.w_r
            w_stab = (self.k2 * self.v_r * pi * math.sin(theta_e)) / ((1+psi*psi+pi*pi)*theta_e) + saturation_function(self.k3, theta_e)
                
            v = v_ref + v_stab
            w = w_ref + w_stab
                
            velocity = Twist()  
            

            velocity.linear.x = float(v)
            velocity.angular.z = float(w)

            self.cmd_vel_pub.publish(velocity)
            

            self.get_logger().info(f"position [x :{x_e}, y :{y_e}, theta :{theta_e}]")
            self.get_logger().info(f"velocity:[v :{v}, w:{w}]")

def plot_thread(node):
    plt.ion()  # Interactive mode on
    figure, ax = plt.subplots()
    while rp.ok():
        ax.clear()
        ax.plot(node.times, node.x_errors, label='x_error')
        ax.plot(node.times, node.y_errors, label='y_error')
        ax.plot(node.times, node.theta_errors, label='theta_error')
        ax.legend()
        plt.draw()
        plt.pause(0.1)
    plt.show()
            
def main(args=None):
        rp.init(args=args)
        
        executor = MultiThreadedExecutor()
        
        drive = DWMR_CONTROL()
        
        executor.add_node(drive)
        
        plotting_thread = threading.Thread(target=plot_thread, args=(drive,))
        plotting_thread.start()
        try:
            executor.spin()
        finally:
            drive.destroy_node()
            rp.shutdown()
        
if __name__ == '__main__':
        main()