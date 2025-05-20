from machine import Pin, I2C
from time import sleep
from vl53l0x_nb import VL53L0X

# XSHUT pin: GPIO14
xshut = Pin(14, Pin.OUT)
xshut.value(1)  # 센서 활성화
sleep(0.01)

# I2C 설정(SDA: 21, SCL: 22)
i2c = I2C(0, scl=Pin(22), sda=Pin(21), freq=400000)

# VL53L0X 객체 생성
vl = VL53L0X(i2c)

# 거리 측정 루프
while True:
    if not vl.range_started:
        vl.start_range_request()
    if vl.reading_available():
        distance = vl.get_range_value()
        if distance is not None:
            print("Distance: {}mm".format(distance))
    sleep(0.05) # 대기
