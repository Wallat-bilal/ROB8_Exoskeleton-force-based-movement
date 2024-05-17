import pygame
import serial
import time
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32MultiArray  # We will publish an array of float values

class LoadcellSerialReceiver(Node):
    def __init__(self, plot=False):
        super().__init__('serial_data_plotter')
        self.publisher_ = self.create_publisher(Float32MultiArray, 'serial_data', 10)  # Creating topic for MotorController.py to subscribe to
        self.plot = plot
        if self.plot:
            pygame.init()
            self.screen_width, self.screen_height = 1200, 800
            self.border_margin = 20
            self.left_margin = 100
            self.screen = pygame.display.set_mode((self.screen_width, self.screen_height))
            pygame.display.set_caption("Serial Data Plotter")
            self.clock = pygame.time.Clock()
            self.clock.tick(40)
            self.font = pygame.font.Font(None, 20)
            self.color_gray = (200, 200, 200)
            self.color_white = (255, 255, 255)
            self.color_black = (0, 0, 0)
            self.color_red = (255, 0, 0)
            self.color_green = (0, 255, 0)
            self.color_blue = (0, 0, 255)
            self.initialize_plot_data()
        self.data = np.empty((2000, 6), float)
        self.current_row = np.empty((1, 6), float)
        self.tic_tac_np = np.empty((2000, 1), float)
        self.setup_serial()
        self.running = True            

    def setup_serial(self):
        self.ser = serial.Serial('/dev/ttyACM0', 115200)
        self.ser.setDTR(False)
        time.sleep(1)
        self.ser.flushInput()
        self.ser.setDTR(True)
        time.sleep(1)
        self.ser.setDTR(False)
        time.sleep(1)
        self.ser.flushInput()
        self.ser.setDTR(True)
        print("Arduino reset")

    def initialize_plot_data(self):
        self.plot_window = 400
        self.time_current = time.time()
        self.y_var1 = np.array(np.zeros([self.plot_window]))
        self.y_var2 = np.array(np.zeros([self.plot_window]))
        self.y_var3 = np.array(np.zeros([self.plot_window]))
        self.y_var4 = np.array(np.zeros([self.plot_window]))

    def draw_text(self, text, position, color=(0, 0, 0), vertical=False):
        text_surface = self.font.render(text, True, color)
        if vertical:
            text_surface = pygame.transform.rotate(text_surface, 90)  # Rotate the text by 90 degrees
        self.screen.blit(text_surface, position)

    def plot_data(self, y_data, color, plot_position, signals_number=4):
        # max_y and min_y calculations
        max_y = max(y_data) if max(y_data) > 20 else 20
        min_y = min(y_data) if min(y_data) < -20 else -20
        
        plot_height = (self.screen_height / 4) - self.border_margin * 2
        if signals_number == 2:
            plot_height = (self.screen_height / 2) - self.border_margin * 2
        upper_bound = plot_position 
        lower_bound = upper_bound + 2 * self.border_margin + plot_height
        plot_width = self.screen_width - self.left_margin - self.border_margin
        zero_point = lower_bound - self.border_margin - ((0 - min_y) * plot_height / (max_y - min_y))
        pygame.draw.line(self.screen, self.color_gray, (self.left_margin-4, zero_point), (self.left_margin, zero_point), 2)
        
        x_ratio = plot_width / self.plot_window
        y_ratio = plot_height / (max_y - min_y)

        y_data_pairs = zip(y_data[:-1], y_data[1:])
        coordinates = [
            (
                (i * x_ratio + self.left_margin, plot_height - ((y1 - min_y) * y_ratio) + upper_bound + self.border_margin),
                ((i + 1) * x_ratio + self.left_margin, plot_height - ((y2 - min_y) * y_ratio) + upper_bound + self.border_margin),
            )
            for i, (y1, y2) in enumerate(y_data_pairs)
        ]

        for (x1, y1), (x2, y2) in coordinates:
            pygame.draw.line(self.screen, color, (x1, y1), (x2, y2), 2)

    def plot_four_signals(self, y_var1, y_var2, y_var3, y_var4):
        self.plot_data(y_var1, self.color_blue, (self.screen_height / 4) - 200)
        self.plot_data(y_var2, self.color_green, (self.screen_height / 2) - 200)
        self.plot_data(y_var3, self.color_red, (self.screen_height * 3 / 4) - 200)
        self.plot_data(y_var4, self.color_black, self.screen_height - 200)
        self.draw_text("Serial Data Plotter", (self.screen_width / 2 - 100, 10))
        self.draw_text("Time", (self.screen_width / 2, self.screen_height - 30))
        self.draw_text("Load Cell 1", (self.left_margin / 2 - 50, (self.screen_height / 4) - 100), (0, 0, 255), True)
        self.draw_text("Load Cell 2", (self.left_margin / 2 - 50, (self.screen_height / 2) - 100), (255, 0, 0), True)
        self.draw_text("Load Cell 3", (self.left_margin / 2 - 50, (self.screen_height * 3 / 4) - 100), (0, 255, 0), True)
        self.draw_text("Load Cell 4", (self.left_margin / 2 - 50, self.screen_height - 100), (255, 0, 255), True)

    def plot_two_signals(self, y_var1, y_var2, y_var3, y_var4):
        y_var1_2 = y_var1 + y_var2
        y_var3_4 = y_var3 + y_var4
        self.plot_data(y_var1_2, self.color_blue, (self.screen_height / 2) - 400, signals_number=2)
        self.plot_data(y_var3_4, self.color_green, self.screen_height - 400, signals_number=2)
        self.draw_text("Serial Data Plotter", (self.screen_width / 2 - 100, 10))
        self.draw_text("Time", (self.screen_width / 2, self.screen_height - 30))
        self.draw_text("Load Cell 1 + 2", (self.left_margin / 2 - 50, (self.screen_height / 2) - 100), (0, 0, 255), True)
        self.draw_text("Load Cell 3 + 4", (self.left_margin / 2 - 50, self.screen_height - 100), (255, 0, 0), True)

    def run(self, counter_set=1000000):
        _running = True
        counter = 0
        while _running:
            if self.plot:
                for event in pygame.event.get():
                    if event.type == pygame.QUIT or (event.type == pygame.KEYDOWN and event.key == pygame.K_ESCAPE):
                        _running = False

            starting_char = self.ser.read()
            if starting_char == b'<':
                ser_bytes = self.ser.read_until(b'\r\n')
                tic = time.time()
                decoded_bytes = ser_bytes.decode("ascii").strip().strip('<').strip('>').split('\t')
                decoded_var1 = float(decoded_bytes[0])
                decoded_var2 = float(decoded_bytes[1])
                decoded_var3 = float(decoded_bytes[2])
                decoded_var4 = float(decoded_bytes[3])
                decoded_var5 = float(decoded_bytes[4])

                self.current_row = np.array([[time.time(), decoded_var1, decoded_var2, decoded_var3, decoded_var4, decoded_var5]])
                msg = Float32MultiArray()
                msg.data = [-decoded_var1, decoded_var2, decoded_var3, decoded_var4, decoded_var5]
                self.publisher_.publish(msg)

                self.data = np.vstack((self.data, self.current_row))
                if self.plot:
                    self.y_var1 = np.roll(self.y_var1, -1)
                    self.y_var1[-1] = decoded_var1

                    self.y_var2 = np.roll(self.y_var2, -1)
                    self.y_var2[-1] = decoded_var2

                    self.y_var3 = np.roll(self.y_var3, -1)
                    self.y_var3[-1] = decoded_var3

                    self.y_var4 = np.roll(self.y_var4, -1)
                    self.y_var4[-1] = decoded_var4

                if self.plot:
                    self.screen.fill(self.color_white)
                    self.plot_two_signals(self.y_var1, self.y_var2, self.y_var3, self.y_var4)
                    pygame.display.flip()

                print(counter, "\t", decoded_var5, "\t", self.ser.inWaiting(), "\t", round((time.time() - tic) * 1000, 2))
                counter += 1

        if self.plot:
            pygame.quit()
        self.save_data()

    def save_data(self):
        self.df = pd.DataFrame(self.data, columns=['time', 'sensor1', 'sensor2', 'sensor3', 'sensor4', 'arduino_counter'])
        self.df.to_csv('test_data.csv', index=False)
        plt.hist(self.tic_tac_np[self.tic_tac_np != 0], bins=100)
        plt.show()

def main(args=None):
    rclpy.init(args=args)
    node = LoadcellSerialReceiver()
    rclpy.spin_once(node.run())

if __name__ == '__main__':
    main()

