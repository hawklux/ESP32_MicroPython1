from machine import Pin
from time import sleep

led = Pin(2, Pin.OUT) # on-board LED

while True:
    led.on()
    sleep(0.5)
    led.off()
    sleep(0.5)