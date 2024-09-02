import rclpy
from rclpy.node import Node
from std_msgs.msg import Bool
import RPi.GPIO as GPIO

class LedOnOffNode(Node):
    def __init__(self):
        super().__init__('led_onoff_node')
        
        GPIO.setmode(GPIO.BOARD)
        GPIO.setup(24, GPIO.OUT)
        self.subscription = self.create_subscription(
            Bool,
            '/person_check',
            self.check_callback,
            10  # QoS 설정
        )
        self.subscription
        self.timer = None  # 타이머 객체 초기화

    def check_callback(self, msg):
        if msg.data:
            GPIO.output(24, GPIO.HIGH)  # LED 켜기
            if self.timer is not None:
                self.timer.cancel()  # 이전 타이머가 있으면 취소
            self.timer = self.create_timer(3.0, self.turn_off_led)  # 3초 후 LED 끄기

    def turn_off_led(self):
        GPIO.output(24, GPIO.LOW)  # LED 끄기
        self.timer = None  # 타이머 초기화

def main(args=None):
    rclpy.init(args=args)

    led_detect_node = LedOnOffNode()

    rclpy.spin(led_detect_node)

    # 노드가 종료될 때 호출됩니다.
    led_detect_node.destroy_node()
    GPIO.cleanup()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
