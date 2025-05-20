# SG90 / MG90 / FS5019M
from machine import Pin, PWM
from time import sleep

servo = PWM(Pin(15), freq=50) #GPIO15, 50Hz

def set_angle(angle):
    # angle: 0 ~ 180
    min_duty = 26  # 약 0.5ms (2.6%)
    max_duty = 128 # 2.5ms (12.8%) -> 128 = 1023 * 2.5 / 20
    
    duty = int(min_duty + (angle / 180) * (max_duty - min_duty))
    
    # 모터 회전
    servo.duty(duty)
    
# 에: 각도 순환
while True:
    for angle in [0, 90, 180, 90]:
        set_angle(angle)
        sleep(1)
