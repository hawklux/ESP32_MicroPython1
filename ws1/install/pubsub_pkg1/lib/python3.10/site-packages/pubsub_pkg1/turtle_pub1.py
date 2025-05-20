import rclpy
from rclpy.node import Node

from turtlesim.msg import Pose
from geometry_msgs.msg import Twist
from msg_pkg1.msg import Msg1

class CmdAndPose4(Node):
    def __init__(self):
        super().__init__('turtle_node1')
        self.sub_pose = self.create_subscription(
            Pose,
            '/turtle1/pose',
            self.callback_pose,
            10
        )
        self.sub_cmdvel = self.create_subscription(
            Twist,
            '/turtle1/cmd_vel',
            self.callback_cmd,
            10
        )

        self.publisher = self.create_publisher(Msg1, 'turtle1_topic', 10)
        self.timer_period = 1
        self.timer = self.create_timer(self.timer_period, self.timer_callback)
        self.cmd_pose = Msg1()

    def callback_pose(self, msg):
        self.cmd_pose.pose_x = msg.x
        self.cmd_pose.pose_y = msg.y
        self.cmd_pose.linear_vel = msg.linear_velocity
        self.cmd_pose.angular_vel = msg.angular_velocity
        # print(self.cmd_pose)
    
    def callback_cmd(self, msg):
        self.cmd_pose.linear_vel = msg.linear.x
        self.cmd_pose.angular_vel = msg.angular.z
        # print(self.cmd_pose)
    
    def timer_callback(self):
        self.publisher.publish(self.cmd_pose)
        # self.get_logger().info(f'cmd_퍼블리싱: x={self.cmd_pose.pose_x}, y={self.cmd_pose.pose_y}, 선속도={self.cmd_pose.linear_vel}, 각속도={self.cmd_pose.angular_vel}')
        
def main(args=None):
    rclpy.init(args=args)

    turtle_pub_node = CmdAndPose4()
    rclpy.spin(turtle_pub_node)

    turtle_pub_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

# $ ros2 run pubsub_pkg1 turtle_node1
# $ ros2 topic list
# $ ros2 topic echo turtle1_topic
# $ ros2 topic info turtle1_topic
# $ ros2 topic bw turtle1_topic
# $ ros2 topic hz turtle1_topic
# $ ros2 topic pub /turtle1/cmd_vel geometry_msgs/Twist '{linear: {x: 2.0, y: 0.0, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 2.0}}'
#########
# $ ros2 run pubsub_pkg1 turtle_node1
# $ ros2 run turtlesim turtlesim_node
# $ ros2 run pubsub_pkg1 pub_node1
# $ rqt_graph
