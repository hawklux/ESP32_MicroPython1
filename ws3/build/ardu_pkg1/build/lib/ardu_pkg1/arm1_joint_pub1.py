from sensor_msgs.msg import JointState
import rclpy
from rclpy.node import Node
from builtin_interfaces.msg import Time

class ArmJointPublisher(Node):
    def __init__(self):
        super().__init__('arm1_joint_pub1')
        self.puber = self.create_publisher(JointState, 'joint_states', 10)
        self.timer = self.create_timer(0.2, self.timer_callback)
        self.get_logger().info("Arm Joint 퍼블리셔 시작됨")
        self.joint_names = ['joint_1', 'joint_2', 'joint_3', 'joint_4'] # xacro에서 정의한 joint 이름과 일치해야 함!!
        self.pos = [0.0, 0.0, 0.0, 0.0]

    def timer_callback(self):
        msg = JointState()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = self.joint_names
        msg.position = self.pos
        self.puber.publish(msg)
        self.get_logger().info(f"Arm Joint 각도 발행: {msg.position}")
        
        # 각도 증가(0.1 rad씩 증가하다가 2*pi가 넘으면 0으로 초기화)
        self.pos = [(angle + 0.1) % (2 * 3.14) for angle in self.pos]
        # for i in range(len(self.pos)):
        #     self.pos[i] += 0.1 # 0.1 rad씩 증가
        #     # 각도가 2*pi를 넘으면 0으로 초기화
        #     if self.pos[i] > 6.28:
        #         self.pos[i] = 0.0

def main(args=None):
    rclpy.init(args=args)
    node = ArmJointPublisher()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()
        node.get_logger().info("Arm Joint 퍼블리셔 종료됨")
