# BLE (SPP 아님)
from machine import Pin
from bluetooth import BLE, UUID, FLAG_READ, FLAG_WRITE
import bluetooth
import struct
import time

# BLE 권한 플래그 수동 정의(자동 임포트 안 되는 문제 대비)
FLAG_READ = 0x0002
FLAG_WRITE = 0x0008
FLAG_NOTIFY = 0x0010

led = Pin(2, Pin.OUT)

# UUIDs (16-bit or 128-bit)
UART_SERVICE_UUID = bluetooth.UUID("6E400001-B5A3-F393-E0A9-E50E24DCCA9E")
UART_RX_CHAR_UUID = bluetooth.UUID("6E400002-B5A3-F393-E0A9-E50E24DCCA9E")
UART_TX_CHAR_UUID = bluetooth.UUID("6E400003-B5A3-F393-E0A9-E50E24DCCA9E")

# RX: 스마트폰 -> ESP32, TX: ESP32 -> 스마트폰
UART_SERVICE = (
    UART_SERVICE_UUID,
    (
        (UART_RX_CHAR_UUID, FLAG_WRITE),
        (UART_TX_CHAR_UUID, FLAG_READ | FLAG_NOTIFY),
    ),
)

class BLEUART:
    def __init__(self):
        self.ble = BLE()
        self.ble.active(True)
        self.ble.irq(self.ble_irq)
        
        ((self.rx_handle, self.tx_handle),) = self.ble.gatts_register_services((UART_SERVICE,))
        self.ble.gatts_write(self.tx_handle, b"Ready")
        self.connections = set()
        
        self.ble.gap_advertise(100,
            adv_data=self.advertise_payload(
                name="hawx_BT",
                services=[UART_SERVICE_UUID]))
        print("BLE UART is now advertising...")
        
    def advertise_payload(self, name=None, services=None):
        payload = bytearray()
        
        def _append(ad_type, value):
            payload.append(len(value) + 1)
            payload.append(ad_type)
            payload.extend(value)
            
        if name:
            _append(0x09, name.encode())
        
        if services:
            for uuid in services:
                b = bytes(uuid)
                _append(0x07 if len(b) == 16 else 0x03, b)
                
        return payload
    
    def ble_irq(self, event, data):
        if event == 1:  # _IRQ_CENTRAL_CONNECT
            conn_handle, _, _ = data
            self.connections.add(conn_handle)
            print("Device connected")
            
        elif event == 2:  # _IRQ_CENTRAL_DISCONNECT
            conn_handle, _, _ = data
            self.connections.discard(conn_handle)
            print("Device disconnected")
            self.ble.gap_advertise(100,
                adv_data=self.advertise_payload(
                    name="hawx_BT",
                    services=[UART_SERVICE_UUID]))
            
        elif event == 3:  # _IRQ_GATTS_WRITE
            conn_handle, attr_handle = data
            if attr_handle == self.rx_handle:
                msg = self.ble.gatts_read(self.rx_handle).decode().strip().lower()
                print("Received: ", msg)
                if msg == "on":
                    led.value(1)
                elif msg == "off":
                    led.value(0)
                    
# 실행
ble_uart = BLEUART()

# 대기 루프
while True:
    time.sleep(1)