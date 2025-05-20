# 모터가 너무 빨리 말고 부드럽게 회전하도록 수정함 
from machine import Pin, PWM
from time import sleep

servo = PWM(Pin(15), freq=50) # GPIO15, 50Hz

# Duty 범위
min_duty = 26
max_duty = 128

# 각도를 duty로 변환
def angle_to_duty(angle):
    return int(min_duty + (angle / 180) * (max_duty - min_duty))

# 현대 각도 추적
current_angle = 0

def move_to(angle):
    global current_angle
    
    step = 1 if angle > current_angle else -1
    
    # 0~90, 1 또는 -1씩 0.01초마다 회전  
    for a in range(current_angle, angle + step, step):
        duty = angle_to_duty(a)
        servo.duty(duty)
        sleep(0.01)
        
    current_angle = angle
    
while True:
    for target in [0, 90, 180, 90]:
        move_to(target)
        sleep(1)
