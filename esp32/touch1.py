from machine import TouchPad, Pin
from time import sleep

led = Pin(2, Pin.OUT)
toucher = TouchPad(Pin(4))  # T0: GPIO4

threashold = 500  # 터치 기준값 (실험적 조정)
led_state = False 

while True:
    touch_val = toucher.read()
    print("Touch Value: ", touch_val)
    
    if touch_val < threashold:
        led_state = not led_state
        led.value(led_state)
        sleep(0.3) # 너무 민감한 반응 방지: debounce time
    sleep(0.05)
    