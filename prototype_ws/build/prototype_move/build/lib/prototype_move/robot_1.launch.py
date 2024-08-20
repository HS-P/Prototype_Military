import os
import select
import sys
import rclpy
import time #for wating sec
from rclpy.node import Node

from geometry_msgs.msg import Twist
from rclpy.qos import QoSProfile

if os.name == 'nt' :
    import msvcrtelse
else:
    import termios
    import tty
    
linear_velocity = 0.03
angular_velocity = 0.2

TURTLEBOT3_MODEL = os.environ['TURTLEBOT3_MODEL']

e = "Error occured"

def main():
    
    try:
        rclpy.init()

        qos = QoSProfile(depth=10)
        node = rclpy.create_node('teleop_keyboard')
        pub = node.create_publisher(Twist, 'cmd_vel', qos)

        twist = Twist()
        
        print("-- Start --")
        
        twist.linear.x = linear_velocity
        twist.linear.y = 0.0
        twist.linear.z = 0.0
        
        pub.publish(twist)
        
        print("-- Forward Move start--")
        time.sleep(3)
        print("-- Forward Move end--")
        
        twist.linear.x = 0.0
        twist.angular.x = 0.0
        twist.angular.y = 0.0
        twist.angular.z = angular_velocity
        
        pub.publish(twist)
        time.sleep(3)
    
    except Exception as e:
        print(e)
        
    finally:
        twist = Twist()
        twist.linear.x = 0.0
        twist.linear.y = 0.0
        twist.linear.z = 0.0

        twist.angular.x = 0.0
        twist.angular.y = 0.0
        twist.angular.z = 0.0

        pub.publish(twist)
    
if __name__ == '__main__':
    main()
    