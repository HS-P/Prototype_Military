import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
from rclpy.qos import QoSProfile

class LaserScanModifier(Node):
    def __init__(self):
        super().__init__('laser_scan_modifier')
        qos_profile = QoSProfile(depth=10)  # 적절한 QoS 프로파일 선택
        self.subscription = self.create_subscription(
            LaserScan,
            '/scan',
            self.scan_callback,
            qos_profile)
        self.publisher = self.create_publisher(
            LaserScan,
            '/modified_scan',
            qos_profile)

    def scan_callback(self, msg):
        modified_ranges = []
        angle_min = -0.785  # 수정: 원하는 최소 각도 설정 (-45도)
        angle_max = 0.785   # 수정: 원하는 최대 각도 설정 (45도)

        for angle, distance in zip(msg.angle_min, msg.ranges):
            if angle_min <= angle <= angle_max:
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
        modified_msg.intensities = []  # 삭제: 인텐시티 필요 없음

        self.publisher.publish(modified_msg)

def main(args=None):
    rclpy.init(args=args)
    node = LaserScanModifier()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()