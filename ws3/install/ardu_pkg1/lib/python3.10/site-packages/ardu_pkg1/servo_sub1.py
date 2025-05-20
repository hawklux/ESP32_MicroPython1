import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32
import serial
import time

class ServoSubscriber(Node):
    def __init__(self):
        super().__init__('servo_sub1')
        try:
            self.ser = serial.Serial('/dev/ttyUSB0', 9600, timeout=1)
            time.sleep(2) # 시리얼 포트 연결 대기
            self.get_logger().info("시리얼 포트 연결됨")
        except Exception as e:
            self.get_logger().error(f"시리얼 포트 연결 실패: {e}")
            return
        
        self.suber = self.create_subscription(
            Int32,
            'angle_topic1',
            self.listener_callback,
            10
        )
        self.get_logger().info("/angle_topic1 구독 시작됨")

    def listener_callback(self, msg):
        angle = msg.data
        angle = min(max(angle, 0), 180)  # 각도를 0~180으로 제한
        cmd = f"{angle}\n"
        self.ser.write(cmd.encode()) # timeout 1초 동안 write함.
        self.get_logger().info(f"각도 수신: {angle}도")

def main(args=None):
    rclpy.init(args=args)
    node = ServoSubscriber()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()
        if node.ser.is_open:
            node.ser.close()
            node.get_logger().info("시리얼 포트 닫힘")

