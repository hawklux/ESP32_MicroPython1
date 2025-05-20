import bluetooth
from machine import Pin
from micropython import const
import time

_IRQ_BT_CONN = const(1)
_IRQ_BT_DISCONN = const(2)
_IRQ_BT_DATA = const(3)

led = Pin(2, Pin.OUT) # 내장 LED

class BTSerial:
    def __init__(self):
        self.bt = bluetooth.Bluetooth()
        self.bt.active(True)
        self.bt.config(rxbuf=1024)
        self.bt.irq(self.bt_irq) # interrupt event 처리 콜백
        
        self.conn_handle = None
        
        # SPP(Serial Port Profile) 서비스 생성
        self.bt.advertise(True)
        self.bt.set_advertisement(name="hawx_BT",
            service_uuid=b"12345678-1234-5678-1234-56789abcdef0")
        print("Bluetooth SPP started, waiting for connection...")
    
    # Interrupt Request callback
    def bt_irq(self, event, data):
        if event == _IRQ_BT_CONN:
            conn_handle, _, _ = data
            self.conn_handle = conn_handle
            print("Device connected")
        
        elif event == _IRQ_BT_DISCONN:
            self.conn_handle = None
            print("Disconnected")
            
        elif event == _IRQ_BT_DATA:
            conn_handle, = data
            if self.conn_handle == conn_handle:
                msg = self.bt.read().decode().strip()
                print("Received: ", msg)
                
                if msg.lower() == "on":
                    led.value(1)
                elif msg.lower() == "off":
                    led.value(0)

# 시작
bt_serial = BTSerial()


