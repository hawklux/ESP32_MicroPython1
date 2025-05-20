from launch import LaunchDescription
from launch.actions import ExecuteProcess
from launch_ros.actions import Node

def generate_launch_description():
    my_launch = LaunchDescription()

    turtlesim_node1 = Node(
        package='turtlesim',
        executable='turtlesim_node',
        output='screen',
        parameters=[
            {'background_r': 255},
            {'background_g': 255},
            {'background_b': 100}
        ]
        # parameters=[{'background_r': 0, 'background_g': 0, 'background_b': 0}],
        # remappings=[('/turtle1/cmd_vel', '/turtle1/cmd_vel')]
    )

    turtlesim_node2 = Node(
        package='pubsub_pkg1',
        executable='action_srvr2',
        output='screen',
    )

    my_launch.add_action(turtlesim_node1)
    my_launch.add_action(turtlesim_node2)

    return my_launch
