import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import serial
import time

class Arm1Subscriber(Node):
    def __init__(self):
        super().__init__('arm1_sub1')
        try:
            self.ser = serial.Serial('/dev/ttyUSB0', 9600, timeout=1)
            time.sleep(2) # 시리얼 포트 연결 대기
            self.get_logger().info("시리얼 포트 연결됨")
        except Exception as e:
            self.get_logger().error(f"시리얼 포트 연결 실패: {e}")
            return
        
        self.suber = self.create_subscription(
            String,
            'arm1_topic1',
            self.listener_callback,
            10
        )
        self.get_logger().info("/arm1_topic1 구독 시작됨")

    def listener_callback(self, msg):
        cmd = msg.data.strip() + '\n' # 문자열 양쪽 공백 제거 후 줄바꿈 추가 "10,20,30,40\n"
        self.ser.write(cmd.encode())
        self.get_logger().info(f"각도 수신: {cmd.strip()}") # 줄바꿈 제거 후 출력

def main(args=None):
    rclpy.init(args=args)
    node = Arm1Subscriber()
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
