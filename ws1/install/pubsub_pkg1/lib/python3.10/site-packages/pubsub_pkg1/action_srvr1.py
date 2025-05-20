# 터틀심으로 액션 서버를 구현하는 예제
import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from msg_pkg1.action import Action1

class ActionServer1(Node):
    def __init__(self):
        super().__init__('action_server1_node')
        # 액션 서버 생성
        self.action_server = ActionServer(
            self,
            Action1,
            'action1_srvr',
            self.execute_callback
        )
    
    # 액션 서버 콜백 함수 (goal 완료했다고 치고 구성만 해봄)
    def execute_callback(self, goal_handle):
        self.get_logger().info("액션 서버 콜백 함수 실행")

        goal_handle.succeed() # 액션 목표값 처리 완료했다고 침
        result = Action1.Result()
        
        return result

    # 제대로 액션 목표값을 가져와서 실행하는 로직을 구현
    # 예시: 목표값을 1초마다 1씩 증가시키는 로직
    # 액션 목표값을 가져옴
    # goal = goal_handle.request
    '''
    def execute_callback(self, goal_handle):
        # 목표값을 가져옴
        goal = goal_handle.request
        self.get_logger().info(f"액션 목표값: {goal.goal}")
        feedback_msg = Action1.Feedback()
        feedback_msg.feedback = 0
        goal_handle.publish_feedback(feedback_msg)
        # 액션 목표값을 처리하는 로직을 구현
        # 예시: 목표값을 1초마다 1씩 증가시키는 로직
        for i in range(goal.goal):
            feedback_msg.feedback += 1
            goal_handle.publish_feedback(feedback_msg)
            self.get_logger().info(f"피드백: {feedback_msg.feedback}")
            self.get_clock().sleep_for(rclpy.duration.Duration(seconds=1.0))
        # 액션 목표값 처리 완료
        goal_handle.succeed()
        result = Action1.Result()
        result.result = feedback_msg.feedback
        self.get_logger().info(f"결과: {result.result}")
        return result
        # 액션 서버 종료
        self.action_server.destroy()
        self.get_logger().info("액션 서버 종료")
        rclpy.shutdown()
        # 액션 서버 실행
def main(args=None):
    rclpy.init(args=args)
    action_server = ActionServer1()
    rclpy.spin(action_server)
    action_server.destroy_node()
    rclpy.shutdown()
if __name__ == '__main__':
    main()
# 액션 서버를 실행하는 메인 함수
'''

def main(args=None):
    rclpy.init(args=args)
    action_server = ActionServer1()
    rclpy.spin(action_server)

    action_server.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
