#커스텀 메시지 중 cmd_vel/Twist 메시지를 받아서 출력하는 노드
#1. /turtle1/pose와 /turtle1/cmd_vel 토픽을 구독하고, 메시지를 받아서 출력
#2. 실제 이동 결과: Pose 메시지의 x, y, theta, linear_velocity, angular_velocity를 Msg1 메시지로 저장
#3. 거북이에게 명령: Twist 메시지의 linear.x, angular.z를 Msg1 메시지로 저장
#4. Msg1 메시지를 출력
import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose # 터틀심의 Pose 메시지
from geometry_msgs.msg import Twist # 터틀심의 Twist 메시지
from msg_pkg1.msg import Msg1  # 커스텀 메시지 Msg1

class CmdAndPose3(Node):
    def __init__(self):
        super().__init__('turtle_msg3')
        self.sub_pose = self.create_subscription(
            Pose,
            '/turtle1/pose',  # 터틀심이 구독하는 토픽명: 현재 위치
            self.callback_pose,
            10
        )
        self.sub_cmdvel = self.create_subscription(
            Twist,
            '/turtle1/cmd_vel',  # 터틀심이 구독하는 토픽명: 이동 명령
            self.callback_cmd,
            10
        )
        self.cmd_pose = Msg1()
        
    # 거북이가 실제 이동한 결과 보기 (현재 위치, 속도)
    def callback_pose(self, msg): # /turtle1/pose의 msg
        self.get_logger().info(f'터틀1 위치: x={msg.x}, y={msg.y}, theta={msg.theta}')
        self.cmd_pose.pose_x = msg.x
        self.cmd_pose.pose_y = msg.y
        self.cmd_pose.linear_vel = msg.linear_velocity
        self.cmd_pose.angular_vel = msg.angular_velocity
        # print(self.cmd_pose)

    # 거북이에게 내린 이동 명령 보기
    def callback_cmd(self, msg): # /turtle1/cmd_vel의 msg
        self.cmd_pose.linear_vel = msg.linear.x
        self.cmd_pose.angular_vel = msg.angular.z
        self.get_logger().info(f'선속도: {msg.linear.x}, 각속도: {msg.angular.z}')
        # print(self.cmd_pose)

def main(args=None):
    rclpy.init(args=args)

    turtle1_node = CmdAndPose3()
    rclpy.spin(turtle1_node)

    turtle1_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
