import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class Arm1Publisher(Node):
    def __init__(self):
        super().__init__('arm1_pub1')
        self.puber = self.create_publisher(String, 'arm1_topic1', 10)
        self.timer = self.create_timer(9.0, self.timer_callback)
        self.get_logger().info("Arm1 퍼블리셔 시작됨")

    def timer_callback(self):
        angles = [10, 20, 30, 40]
        msg = String()
        msg.data = ','.join(map(str, angles)) # "10,20,30,40"
        self.puber.publish(msg)
        self.get_logger().info(f"Arm1 각도 발행: {msg.data}")

def main(args=None):
    rclpy.init(args=args)
    node = Arm1Publisher()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()
        node.get_logger().info("Arm1 퍼블리셔 종료됨")
