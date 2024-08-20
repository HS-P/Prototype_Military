import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
from rclpy.qos import QoSProfile, qos_profile_sensor_data

import math

class LaserScanModifier(Node):
    def __init__(self):
        super().__init__('laser_scan_modifier')
        qos_profile = QoSProfile(depth=10)
        self.subscription = self.create_subscription(
            LaserScan,
            '/scan',
            self.scan_callback,
            qos_profile=qos_profile_sensor_data)
        self.publisher = self.create_publisher(
            LaserScan,
            '/modified_scan',
            qos_profile=qos_profile_sensor_data)

    def scan_callback(self, msg):
        modified_ranges = []
        angle_min = math.pi*0.25  # Front angle (0~45)
        angle_max = math.pi*1.75   # Last angle (315~360(0))

        for i, distance in enumerate(msg.ranges):
            angle = msg.angle_min + i * msg.angle_increment
            if 0 <= angle <= angle_min and distance > 0:
                modified_ranges.append(distance)
            elif angle >= angle_max and distance > 0:
                modified_ranges.append(distance)

        modified_msg = LaserScan()
        modified_msg.header = msg.header
        modified_msg.angle_min = angle_min
        modified_msg.angle_max = angle_max
        modified_msg.angle_increment = msg.angle_increment
        modified_msg.time_increment = msg.time_increment
        modified_msg.scan_time = msg.scan_time
        modified_msg.range_min = msg.range_min
        modified_msg.range_max = msg.range_max
        modified_msg.ranges = modified_ranges
        modified_msg.intensities = []

        self.publisher.publish(modified_msg)

def main(args=None):
    rclpy.init(args=args)
    node = LaserScanModifier()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()