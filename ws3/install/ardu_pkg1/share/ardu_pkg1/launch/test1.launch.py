from launch_ros.actions import Node
from launch.substitutions import Command, PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch import LaunchDescription

def generate_launch_description():
    pkg_name = "ardu_pkg1"
    urdf_file = "test1_2dof.urdf.xacro"
    urdf_path = PathJoinSubstitution([
        FindPackageShare(pkg_name),
        'urdf',
        urdf_file
    ])

    return LaunchDescription([
        DeclareLaunchArgument(
            name='model',
            default_value=urdf_path,
            description='Absolute path to robot urdf file'
        ),
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            output='screen',
            parameters=[{
                'robot_description': Command(['xacro ', LaunchConfiguration('model')])
            }]
        ),
        Node(
            package='joint_state_publisher_gui',
            executable='joint_state_publisher_gui',
            output='screen'
        ),
        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            output='screen'
        )
    ])    
    
