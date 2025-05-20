from machine import Pin, PWM
from time import sleep

# 공통 설정
FREQ = 50
MIN_DUTY = 26   # 0.5ms
MAX_DUTY = 128  # 2.5ms

# 각도 -> 듀티 변환
def angle_to_duty(angle):
    return int(MIN_DUTY + (angle/180)*(MAX_DUTY - MIN_DUTY))

# 서보 초기화 (PWM 객체)
servo_pins = [15, 16, 17, 18, 19]
servos = [PWM(Pin(pin), freq=FREQ) for pin in servo_pins]

# 각 서보의 현재 각도 저장용 리스트
current_angles = [0, 0, 0, 0, 0]

# 서보 부드럽게 회전
def move_servo(index, target_angle):
    global current_angles
    
    current = current_angles[index]
    step = 1 if target_angle > current else -1
    
    for angle in range(current, target_angle + step, step):
        duty = angle_to_duty(angle)
        servos[index].duty(duty)
        sleep(0.01)  # 각도당 딜레이
        
    current_angles[index] = target_angle
    
# 여러 서보 동시에 동작
def move_all_servos(targets):
    for i in range(5):
        move_servo(i, targets[i])
    sleep(1.5)  # 전체 동작 후 대기

# 테스트: 각도 순환
while True:
    move_all_servos([0, 0, 0, 0, 0])
    move_all_servos([90, 45, 90, 135, 180])
    move_all_servos([180, 135, 90, 45, 0])
    