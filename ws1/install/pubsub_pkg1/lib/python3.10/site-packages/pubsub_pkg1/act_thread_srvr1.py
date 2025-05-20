# 멀티 쓰레드2: 일정한 거리 이동시키는 액션 서버 쓰레드
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from rclpy.executors import MultiThreadedExecutor

from turtlesim.msg import Pose # 터틀심이 발행
from geometry_msgs.msg import Twist # 내가 발행하는 cmd_vel
from msg_pkg1.action import Action1
from pubsub_pkg1.sub_node1 import TurtlesimSubscriber

import math
import time

# 터틀심으로부터 발행되는 pose 토픽을 구독하는 노드
class ActionSub_Pose(TurtlesimSubscriber):
    # 액션 서버를 인자로 받아서 생성
    def __init__(self, act_srvr):
        super().__init__()
        self.act_srvr = act_srvr
    
    # 원래 pose_callback()을 오버라이드: current_pose를 추가
    def pose_callback(self, msg): # Override 
        self.act_srvr.current_pose = msg
        self.get_logger().info(f'Turtle1 Position: x={msg.x}, y={msg.y}')

# 액션 목표값을 처리하는 로직을 구현
class ActionServer3(Node):
    # 액션 서버를 생성하는 노드
    def __init__(self):
        super().__init__('act_srvr3_thread_node')
        self.total_dist = 0 #거북이가 움직인 거리 (pose.x,y좌표로 계산)
        self.is_first_time = True #거북이 처음 위치 (pose.x,y좌표)인지 확인하는 변수
        self.current_pose = Pose()
        self.prev_pose = Pose()
        self.puber = self.create_publisher(Twist, 
                    'turtle1/cmd_vel', 10)
        self.action_server = ActionServer(self, Action1, 'act_srvr3_thread', self.execute_callback)

    def calc_diff_pose(self):
        # 거북이의 현재 위치와 이전 위치의 차이를 계산
        # 처음 위치라면
        if self.is_first_time:
            self.prev_pose.x = self.current_pose.x
            self.prev_pose.y = self.current_pose.y
            self.is_first_time = False

        # 이동한 위치라면
        diff_x = self.current_pose.x - self.prev_pose.x
        diff_y = self.current_pose.y - self.prev_pose.y
        
        # 거리 계산
        dist = math.sqrt(diff_x ** 2 + diff_y ** 2)

        return dist

    # 액션 서버 콜백 함수
    # goal_handle: 내가 지정하는 목표값
    # goal_handle.request: 액션 서버에서 요청하는 목표값 
    #  - dist: 목표 거리, linear_x: 목표 x값, angular_z: 목표 z값,    
    # goal_handle.publish_feedback(feedback_msg): 피드백 메시지 발행
    # goal_handle.succeed(): 액션 목표값 처리 완료
    def execute_callback(self, goal_handle):
        self.get_logger().info("액션 서버 콜백 함수 실행")
        feedback_msg = Action1.Feedback()

        msg = Twist()   # cmd_vel 메시지 객체 생성
        msg.linear.x = goal_handle.request.linear_x # 내가 지정하는 목표 x값
        msg.angular.z = goal_handle.request.angular_z # 내가 지정하는 목표 z값

        while True:
            self.total_dist += self.calc_diff_pose()
            # 피드백 메시지 생성 후 퍼블리시
            feedback_msg.remained_dist = goal_handle.request.dist - self.total_dist 

            self.puber.publish(msg)
            time.sleep(0.1)

            if feedback_msg.remained_dist < 0.2: # 오차허용범위
                self.get_logger().info("목표 거리 도달")
                break
        
        goal_handle.succeed()  # 액션 목표값 처리 완료
        result = Action1.Result()

        result.pos_x = self.current_pose.x
        result.pos_y = self.current_pose.y
        result_pos_theta = self.current_pose.theta
        result.result_dist = self.total_dist

        self.total_dist = 0
        self.is_first_time = True

        return result

def main(args=None):
    rclpy.init(args=args)

    executor = MultiThreadedExecutor()
    # 액션 서버 노드 생성
    act_srvr_node = ActionServer3()
    # 구독 노드 생성
    sub_node = ActionSub_Pose(act_srvr=act_srvr_node)

    executor.add_node(sub_node)
    executor.add_node(act_srvr_node)

    try:
        # 멀티스레드로 노드 실행
        executor.spin()
    finally:
        # 종료 시 노드 삭제
        executor.shutdown()
        act_srvr_node.destroy_node()
        sub_node.destroy_node()
        rclpy.shutdown()
    
if __name__ == '__main__':
    main()
