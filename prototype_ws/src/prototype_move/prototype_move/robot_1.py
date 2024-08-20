import os
import rclpy

from geometry_msgs.msg import Twist
from prototype_move.auto import autonomousdriving


if os.name == 'nt' :
    import msvcrtelse
else:
    import termios
    import tty
    

def main(args=None):
    rclpy.init(args=args)
    autodrive = autonomousdriving()
    
    node = rclpy.create_node('main_autodrive')
    

    if rclpy.ok():
        rclpy.spin(autodrive)
    
    autodrive.destroy_node()
    rclpy.shutdown()
    
if __name__ == '__main__':
    main()
    