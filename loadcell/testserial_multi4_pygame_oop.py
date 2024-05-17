import pygame
import serial
import time
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

class SerialDataPlotter():
    def __init__(self):
        pygame.init()
        self.screen_width, self.screen_height = 800, 800
        self.border_margin = 20
        self.left_margin = 100
        self.screen = pygame.display.set_mode((self.screen_width, self.screen_height))
        pygame.display.set_caption("Serial Data Plotter")
        self.clock = pygame.time.Clock()
        self.clock.tick(40)
        self.font = pygame.font.Font(None, 20)
        self.data = np.empty((2000, 6), float)
        self.current_row = np.empty((1, 6), float)
        self.tic_tac_np = np.empty((2000, 1), float)
        self.color_gray = (200, 200, 200)
        self.color_white = (255, 255, 255)
        self.color_black = (0, 0, 0)
        self.color_red = (255, 0, 0)
        self.color_green = (0, 255, 0)
        self.color_blue = (0, 0, 255)
        self.setup_serial()
        self.initialize_plot_data()

    def setup_serial(self):
        self.ser = serial.Serial('/dev/ttyACM0', 115200)
        self.ser.setDTR(False)
        time.sleep(1)
        print("starting")
        self.ser.flushInput()
        self.ser.setDTR(True)

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

    def plot_data(self, y_data, color, plot_position, signals_number = 4 ):
            
        # max_y and min_y calculations
        if(max(y_data) > 20):
            max_y = max(y_data)
        else:
            max_y = 20
            
        if(min(y_data) < -20): 
            min_y = min(y_data)   
        else:
            min_y = -20
        # # Calculate the plot's dimensions

        plot_height = (self.screen_height / 4) - self.border_margin * 2
        if(signals_number == 2):
            plot_height = (self.screen_height / 2) - self.border_margin * 2
        upper_bound = plot_position 
        lower_bound = upper_bound + 2 * self.border_margin + plot_height
        section_height = self.screen_height / 4
        plot_width = self.screen_width - self.left_margin - self.border_margin
        color_gray = (200, 200, 200)
        # # Calculate the zero point
        zero_point = lower_bound - self.border_margin - ((0 - min_y) * plot_height / (max_y - min_y))
        quarter_point = lower_bound - self.border_margin - ((max_y / 4 - min_y) * plot_height / (max_y - min_y))
        half_point = lower_bound - self.border_margin - ((max_y / 2 - min_y) * plot_height / (max_y - min_y))
        three_quarter_point = lower_bound - self.border_margin - ((max_y * 3 / 4 - min_y) * plot_height / (max_y - min_y))
        max_point = lower_bound - self.border_margin - ((max_y - min_y) * plot_height / (max_y - min_y))
        minus_quarter_point = lower_bound - self.border_margin - ( 0.25 * min_y - min_y) * plot_height / (max_y - min_y)
        minus_half_point = lower_bound - self.border_margin - ( 0.5 * min_y - min_y) * plot_height / (max_y - min_y)
        minus_three_quarter_point = lower_bound - self.border_margin - ( 0.75 * min_y - min_y) * plot_height / (max_y - min_y)
        min_point = lower_bound - self.border_margin - (min_y - min_y) * plot_height / (max_y - min_y)
        # # Draw Y-axis and half X-axisself..
        # pygame.draw.line(screen, y_axis_color, (plot_width, plot_position), (plot_width, plot_position + plot_height), 2)
        # draw 0 point line
        pygame.draw.line(self.screen, color_gray,  (self.left_margin-4, zero_point), (self.left_margin, zero_point), 2)
        # draw 1/4 point line
        pygame.draw.line(self.screen, color_gray, (self.left_margin - 4, quarter_point), (self.left_margin, quarter_point), 2)
        # draw 1/2 point line
        pygame.draw.line(self.screen, color_gray, (self.left_margin - 4, half_point), (self.left_margin, half_point), 2)
        # draw 3/4 point line
        pygame.draw.line(self.screen, color_gray, (self.left_margin - 4, three_quarter_point), (self.left_margin, three_quarter_point), 2)
        # draw max point line
        pygame.draw.line(self.screen, color_gray, (self.left_margin - 4, max_point), (self.left_margin, max_point), 2)
        # draw -1/4 point line
        pygame.draw.line(self.screen, color_gray, (self.left_margin - 4, minus_quarter_point), (self.left_margin, minus_quarter_point), 2)
        # draw -1/2 point line
        pygame.draw.line(self.screen, color_gray, (self.left_margin - 4, minus_half_point), (self.left_margin, minus_half_point), 2)
        # draw -3/4 point line
        pygame.draw.line(self.screen, color_gray, (self.left_margin - 4, minus_three_quarter_point), (self.left_margin, minus_three_quarter_point), 2)
        # draw min point line
        pygame.draw.line(self.screen, color_gray, (self.left_margin - 4, min_point), (self.left_margin, min_point), 2)
        # 0 point text
        self.draw_text(str(0), (self.left_margin / 2, zero_point), color=(0, 0, 0))
        # 1/4 point text
        self.draw_text(str(int(max_y / 4)), (self.left_margin / 2, quarter_point), color=(0, 0, 0))
        # 1/2 point text  
        self.draw_text(str(int(max_y / 2)), (self.left_margin / 2, half_point), color=(0, 0, 0))
        # 3/4 point text
        self.draw_text(str(int(max_y * 3 / 4)), (self.left_margin / 2, three_quarter_point), color=(0, 0, 0))
        # max point text
        self.draw_text(str(int(max_y)), (self.left_margin / 2, max_point), color=(0, 0, 0))
        # -1/4 point text
        self.draw_text(str(int(min_y / 4)), (self.left_margin / 2, minus_quarter_point), color=(0, 0, 0))
        # -1/2 point text
        self.draw_text(str(int(min_y / 2)), (self.left_margin / 2, minus_half_point), color=(0, 0, 0))
        # -3/4 point text
        self.draw_text(str(int(min_y * 3 / 4)), (self.left_margin / 2, minus_three_quarter_point), color=(0, 0, 0))
        # min point text
        # draw_text(str(int(min_y)), (left_margin / 2, min_point), color=(0, 0, 0))
        # Draw the plot border
        pygame.draw.rect(self.screen, color_gray, width=2 , rect=(self.left_margin, upper_bound + self.border_margin, plot_width, plot_height))
        # Plot the data

        x_ratio = plot_width / self.plot_window
        y_ratio = plot_height / (max_y - min_y)

        # Pair up consecutive elements from the y_data list
        y_data_pairs = zip(y_data[:-1], y_data[1:])

        # Create the x and y coordinates for the line segments
        coordinates = [
            (
                (i * x_ratio + self.left_margin, plot_height - ((y1 - min_y) * y_ratio) + upper_bound + self.border_margin),
                ((i + 1) * x_ratio + self.left_margin, plot_height - ((y2 - min_y) * y_ratio) + upper_bound + self.border_margin),
            )
            for i, (y1, y2) in enumerate(y_data_pairs)
        ]

        # Draw the line segments
        for (x1, y1), (x2, y2) in coordinates:
            pygame.draw.line(self.screen, color, (x1, y1), (x2, y2), 2)
            ...
            # The rest of the plot_data function implementation remains the same
            ...
    def plot_four_signals(self, y_var1, y_var2, y_var3, y_var4):
        self.plot_data(y_var1, self.color_blue, (self.screen_height / 4) -200)  # Blue color for first data set
        self.plot_data(y_var2, self.color_green, (self.screen_height / 2) - 200)  # Red color for second data set
        self.plot_data(y_var3, self.color_red, (self.screen_height * 3 / 4) - 200)  # Green color for third data set
        self.plot_data(y_var4, self.color_black, (self.screen_height) - 200)  # Black color for fourth data set
        self.draw_text("Serial Data Plotter", (self.screen_width / 2 - 100, 10), vertical=False)
        self.draw_text("Time", (self.screen_width / 2 , self.screen_height - 30), vertical=False)
        self.draw_text("Load Cell 1", (self.left_margin / 2 - 50, (self.screen_height / 4) - 100), (0, 0, 255), vertical=True)
        self.draw_text("Load Cell 2", (self.left_margin / 2 -50, (self.screen_height / 2) - 100), (255, 0, 0), vertical=True)
        self.draw_text("Load Cell 3", (self.left_margin / 2 - 50, (self.screen_height * 3 / 4) - 100), (0, 255, 0), vertical=True)
        self.draw_text("Load Cell 4", (self.left_margin / 2 - 50, (self.screen_height) - 100), (255, 0, 255), vertical=True)
    def plot_two_signals(self, y_var1, y_var2, y_var3, y_var4):
        y_var1_2 = y_var1 + y_var2
        y_var3_4 = y_var3 + y_var4
        self.plot_data(y_var1_2, self.color_blue, (self.screen_height / 2) - 400, signals_number=2)  # Blue color for first data set
        self.plot_data(y_var3_4, self.color_green, (self.screen_height) - 400, signals_number=2)  # Red color for second data set
        self.draw_text("Serial Data Plotter", (self.screen_width / 2 - 100, 10), vertical=False)
        self.draw_text("Time", (self.screen_width / 2 , self.screen_height - 30), vertical=False)
        self.draw_text("Load Cell 1 + 2", (self.left_margin / 2 - 50, (self.screen_height / 2) - 100), (0, 0, 255), vertical=True)
        self.draw_text("Load Cell 3 + 4", (self.left_margin / 2 -50, (self.screen_height) - 100), (255, 0, 0), vertical=True)

    def run(self, counter_set = 10000):
        running = True
        counter = 0
        counter_reset = 0
        tac_tic = 0
        while running:
            for event in pygame.event.get():
                if event.type == pygame.QUIT or (event.type == pygame.KEYDOWN and event.key == pygame.K_ESCAPE):
                    running = False
            if counter > counter_set:
                running = False
            # while(ser.inWaiting() == 0):
            #     pass

            starting_char = self.ser.read()
            # ser.flush()
            if starting_char == b'<':
                ser_bytes = self.ser.read_until(b'\r\n')
                decoded_bytes = ser_bytes.decode("ascii").strip().strip('<').strip('>').split('\t')
                decoded_var1 = float(decoded_bytes[0])
                decoded_var2 = float(decoded_bytes[1])
                decoded_var3 = float(decoded_bytes[2])
                decoded_var4 = float(decoded_bytes[3])
                decoded_var5 = float(decoded_bytes[4])

                # tic = time.time()
                self.current_row = np.array([[time.time(), decoded_var1, decoded_var2, decoded_var3, decoded_var4, decoded_var5]])
                self.data = np.vstack((self.data, self.current_row))  

                self.y_var1 = np.roll(self.y_var1, -1)
                self.y_var1[-1] = decoded_var1

                self.y_var2 = np.roll(self.y_var2, -1)
                self.y_var2[-1] = decoded_var2

                self.y_var3 = np.roll(self.y_var3, -1)
                self.y_var3[-1] = decoded_var3

                self.y_var4 = np.roll(self.y_var4, -1)
                self.y_var4[-1] = decoded_var4

                # Update the display
                self.screen.fill(self.color_white)

                if counter % 2:
                    tic = time.time()
                    # self.plot_four_signals(self.y_var1, self.y_var2, self.y_var3, self.y_var4)
                    self.plot_two_signals(self.y_var1, self.y_var2, self.y_var3, self.y_var4)
                    pygame.display.flip()   

                    tac_tic = round((time.time() - tic) * 1000, 2)
                    self.tic_tac_np = np.append(self.tic_tac_np, tac_tic)
                print(counter, "\t" , decoded_var5, "\t", self.ser.inWaiting(), "\t", tac_tic)
                counter = counter + 1

                # time.sleep(0.008)
            # if ser.inWaiting() > 50:
            #     ser.reset_input_buffer()
            #     print("buffer reset")
            #     counter_reset = counter_reset + 1
        pygame.quit()
        self.save_data()

    def save_data(self):
        self.df = pd.DataFrame(self.data, columns=['time', 'sensor1', 'sensor2', 'sensor3', 'sensor4', 'arduino_counter'])
        self.df.to_csv('test_data.csv', index=False)
        plt.hist(self.tic_tac_np[self.tic_tac_np != 0], bins=100)
        plt.show()

if __name__ == "__main__":
    plotter = SerialDataPlotter()
    plotter.run()
