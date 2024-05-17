from pynput.mouse import Listener
import serial


class SerialCommunication:
    def __init__(self):
        self.ser = serial.Serial("/dev/ttyACM1", 9600)
        with Listener(on_click=self.on_click) as listener:
            listener.join()
        self.print()

    def __del__(self):
        self.ser.close()
        print("End")

    def on_click(self, x, y, button, pressed):
        if pressed:
            self.ser.write("Pulse\n".encode())

            self.print()

    def print(self):
        while self.ser.in_waiting:
            print(self.ser.readline().decode().strip())

    def loop(self):
        while True:
            self.print()


def main():
    ser = SerialCommunication()
    ser.loop()


if __name__ == "__main__":
    main()
