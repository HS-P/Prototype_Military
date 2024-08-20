import rclpy as rp
from rclpy.action import ActionServer
from rclpy.node import Node

import time

from prototype_msg.action import Odometryaction
from nav_msgs.msg import Odometry

class PositionSubscriber(Node):
    def __init__(self):
        super().__init__('position_subscriber')
        self.subscription = self.create.subscription(
            Odometry,
            '/odom',
            self.callback,
            10)
    def callback(self, msg):
        position = msg.pose.pose.position
        print("X : ", position.x, "Y : ", position.y, "Z : ", position.z)

class OdometryServer(Node):
    def __init__(self):
        super().__init__('Odometry_Check_Server')
        self.is_first_time = 0
        self.current_pose = Odometry()
        self.previous_pose = Odometry()

    def execute_callback(self, goal_handle):
        feedback_msg = Odometry.Feedback()
        for n in range(0,10):
            feedback_msg.remained_dist = float(n)
            goal_handle.publish_feedback(feedback_msg)
            time.sleep(0.5)
            
        goal_handle.succeed()
        result = Odometry.Result()
        return result

def main(args=None):
    rp.init(args=args)
    Odometry_action_server = OdometryServer()
    rp.spin(Odometry_action_server)
    

if __name__ == '__main__':
    main()