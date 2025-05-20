# 커스텀 메시지 중 Pose 메시지를 받아서 출력하는 노드
import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose # 터틀심의 Pose 메시지
from msg_pkg1.msg import Msg1  # 커스텀 메시지 Msg1

class CmdAndPose2(Node):
    def __init__(self):
        super().__init__('turtle_msg2')
        self.sub_pose = self.create_subscription(
            Pose,
            '/turtle1/pose',
            self.listener_callback,
            10
        )
        self.cmd_pose = Msg1()
    
    def listener_callback(self, msg):
        self.get_logger().info(f'Turtle1: x={msg.x}, y={msg.y}, theta={msg.theta}')
        self.cmd_pose.pose_x = msg.x
        self.cmd_pose.pose_y = msg.y
        self.cmd_pose.linear_vel = msg.linear_velocity
        self.cmd_pose.angular_vel = msg.angular_velocity
        print(self.cmd_pose)

def main(args=None):
    rclpy.init(args=args)

    turtle1_node = CmdAndPose2()
    rclpy.spin(turtle1_node)

    turtle1_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()