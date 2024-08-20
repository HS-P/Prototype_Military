import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan

class LaserScanFilter(Node):
    def __init__(self):
        super().__init__('laser_scan_filter')
        self.subscription = self.create_subscription(
            LaserScan,
            '/scan',
            self.scan_callback,
            10)
        self.publisher = self.create_publisher(
            LaserScan,
            '/filtered_scan',
            10)

    def scan_callback(self, msg):
        filtered_ranges = []
        filtered_angles = []
        angle_min = -0.785  # -45 degrees
        angle_max = 0.785   # 45 degrees

        for angle, distance in zip(msg.angle_min, msg.ranges):
            if angle_min <= angle <= angle_max:
                filtered_ranges.append(distance)
                filtered_angles.append(angle)

        filtered_msg = LaserScan()
        filtered_msg.header = msg.header
        filtered_msg.angle_min = angle_min
        filtered_msg.angle_max = angle_max
        filtered_msg.angle_increment = msg.angle_increment
        filtered_msg.time_increment = msg.time_increment
        filtered_msg.scan_time = msg.scan_time
        filtered_msg.range_min = msg.range_min
        filtered_msg.range_max = msg.range_max
        filtered_msg.ranges = filtered_ranges
        filtered_msg.intensities = []  # Assuming there are no intensity values

        self.publisher.publish(filtered_msg)

def main(args=None):
    rclpy.init(args=args)
    node = LaserScanFilter()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()