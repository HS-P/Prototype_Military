## Node SEtup
from rclpy.node import Node
from rclpy.action import ActionServer


from rclpy.qos import QoSProfile
from rclpy.qos import qos_profile_sensor_data

from sensor_msgs.msg import LaserScan
from geometry_msgs.msg import Twist

import math
import time

class autonomousdriving(Node):
    
    def __init__(self):
        super().__init__('autodrive') ## Reset for Initalize
        
        self.linear_velocity = 0.06
        self.angular_velocity = 0.0
        self.scan_ranges = []
        self.init_scan_state = False
        
        qos = QoSProfile(depth=10)
        
        self.cmd_vel_pub = self.create_publisher(Twist, 'cmd_vel', 10)
        
        self.scan_sub = self.create_subscription(
            LaserScan,
            'scan',
            self.scan_callback,
            qos_profile=qos_profile_sensor_data)

        self.cmd_vel_raw_sub = self.create_subscription(
            Twist,
            'cmd_vel_raw',
            self.cmd_vel_raw_callback,
            qos)
        
        self.update_timer = self.create_timer(
            0.010,
            self.update_callback)
        
        self.get_logger().info("** Hansol's Autonomous Driving : Ready **")
        
        ## *** Function *** ## 
    def scan_callback(self, msg):
        self.scan_ranges = msg.ranges
        self.init_scan_state = True
        
    def cmd_vel_raw_callback(self, msg):
        self.linear_velocity = msg.linear.x
        self.angular_velocity = msg.angular.z
        
    def update_callback(self):
        if self.init_scan_state is True:
            self.detect_obstacle()
            
    def detect_obstacle(self):
        twist = Twist()
        filter_ranges = [value for value in self.scan_ranges if value != 0] 
        obstacle_distance = min(filter_ranges)
        safety_distance = 0.27  # 23cm

        if obstacle_distance > safety_distance:
            twist.linear.x = self.linear_velocity
            twist.angular.z = self.angular_velocity
        else:
            self.get_logger().info("Obstacle!")
            twist.linear.x = -0.04
            twist.angular.z = 0.0
            self.cmd_vel_pub.publish(twist)
            time.sleep(1)
            
            self.get_logger().info("Rotating..")        
            twist.linear.x = 0.0
            twist.angular.z = 0.2
            self.cmd_vel_pub.publish(twist)
            time.sleep(1.3)

            self.get_logger().info("Complete!")    
            twist.linear.x = 0.06
            twist.angular.z = 0.0
            self.cmd_vel_pub.publish(twist)

        self.cmd_vel_pub.publish(twist)