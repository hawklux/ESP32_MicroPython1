# 구독 모드에게 발행하지 않고 직접 시리얼로 전송하는 노드
import rclpy
from rclpy.node import Node
import serial
import time

class ServoController(Node):
    def __init__(self):
        super().__init__('servo_con1')
        self.ser = serial.Serial('/dev/ttyUSB0', 9600, timeout=1)
        time.sleep(2) # 시리얼 포트 연결 대기
        self.get_logger().info("시리얼 포트 연결됨")

        # 1초마다 각도 보내기
        self.angles = [0, 45, 90, 135, 180]
        self.index = 0
        self.timer = self.create_timer(1.0, self.send_angle)
        self.get_logger().info("타이머 시작됨")
        
    def send_angle(self):
        angle = self.angles[self.index]
        msg = f"{angle}\n"
        self.ser.write(msg.encode())
        self.get_logger().info(f"각도 전송: {angle}도")
        self.index = (self.index + 1) % len(self.angles)

def main(args=None):
    rclpy.init(args=args)
    node = ServoController()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()
        node.ser.close()
        node.get_logger().info("시리얼 포트 닫힘")
