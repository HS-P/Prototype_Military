import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import sys
import termios
import tty

class TeleopKeyboard(Node):

    def __init__(self):
        super().__init__('teleop_keyboard')
        self.publisher_ = self.create_publisher(Twist, 'nurimotor', 10)
        self.twist = Twist()
        self.get_logger().info('Use WASD keys to move the robot')

    def get_key(self):
        tty.setraw(sys.stdin.fileno())
        key = sys.stdin.read(1)
        termios.tcsetattr(sys.stdin, termios.TCSADRAIN, termios.tcgetattr(sys.stdin))
        return key

    def run(self):
        try:
            while True:
                key = self.get_key()
                if key == 'w':
                    self.twist.linear.x = 0.5
                    self.twist.angular.z = 0.0
                elif key == 's':
                    self.twist.linear.x = 0.0
                    self.twist.angular.z = 0.0
                elif key == 'a':
                    self.twist.linear.x = 0.0
                    self.twist.angular.z = 0.5
                elif key == 'd':
                    self.twist.linear.x = 0.0
                    self.twist.angular.z = -0.5
                else:
                    self.twist.linear.x = 0.0
                    self.twist.angular.z = 0.0

                self.publisher_.publish(self.twist)

        except KeyboardInterrupt:
            pass

def main(args=None):
    rclpy.init(args=args)
    node = TeleopKeyboard()
    node.run()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
