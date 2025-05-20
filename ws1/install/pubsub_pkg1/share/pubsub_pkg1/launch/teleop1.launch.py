from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            # turtlesim 패키지에 있는 turtlesim_node를 turtlesim1이라는 이름으로 실행해서 터미널에 출력
            namespace= 'turtlesim1', package='turtlesim',
            executable='turtlesim_node', output='screen'),
        Node(
            namespace='turtle_thread1', package='pubsub_pkg1',
            executable='act_thread_srvr3', output='screen')
    ])
    
    # namespace='turtlesim1' # 선택: 패키지 내 실행파일을 실행할 때 쓸 네임스페이스(노드 이름과 모든 내부 리소스가 /turtlesim1/… 접두사를 가짐)
    # package='pubsub_pkg1' # 필수: 패키지명
    # executable='act_thread_srvr3' # 필수: 실행파일/엔트리포인트
    # output='screen' # 선택: 로그를 터미널로 보낼지(screen) 또는 파일로 쓸지(log)
    # name='act_thread_srvr3_node' # 선택: 노드명
    
    
    # return LaunchDescription(
    #     [
    #         Node(
    #             package='pubsub_pkg1',
    #             executable='act_thread_srvr3',
    #             name='act_thread_srvr5_node',
    #             output='screen',
    #             parameters=[
    #                 {'quantile_time': 0.75},
    #                 {'near_goal_time': 0.95}
    #             ]
    #         ),
    #         Node(
    #             package='pubsub_pkg1',
    #             executable='turtle_pub1',
    #             name='turtle_pub1_node',
    #             output='screen'
    #         ),
    #     ]
    # )