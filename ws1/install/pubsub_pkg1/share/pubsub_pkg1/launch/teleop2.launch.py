# launch로 노드 2개 실행: turtlesim_node, pubsub_pkg1 패키지의 pub_node1 노드
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            # turtlesim 패키지에 있는 turtlesim_node를 실행해서 터미널(screen)에 출력
            namespace='pub1_launch', package='turtlesim',
            executable='turtlesim_node', output='screen'),
        Node(
            namespace='pub1_launch', package='pubsub_pkg1',
            executable='pub_node1', output='screen')
    ])
