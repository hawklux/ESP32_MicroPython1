from launch import LaunchDescription
from launch_ros.actions import Node
from launch.substitutions import Command, PathJoinSubstitution, TextSubstitution
from launch_ros.substitutions import FindPackageShare
import os

def generate_launch_description():
    # URDF 파일은 아래처럼 경로 설정을 해줘야 에러 없이 잘 실행됨.
    # 아래처럼 바로 경로를 지정해주면 실행 위치에 따라 에러가 발생함.
    # arguments=['urdf/robot_arm1.urdf.xacro']는 에러 발생함.
    # 따라서, FindPackageShare를 사용하여 install 내 패키지 경로를 찾고, urdf 파일 경로를 설정
    pkg_name = 'ardu_pkg1'
    urdf_file = 'robot_arm1.urdf.xacro'
    urdf_path = PathJoinSubstitution([
        FindPackageShare(pkg_name),
        'urdf',
        urdf_file
    ])

    return LaunchDescription([
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            output='screen',
            parameters=[{
                'robot_description': Command([TextSubstitution(text='xacro '), urdf_path])
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