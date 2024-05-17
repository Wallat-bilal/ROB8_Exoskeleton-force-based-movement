import pygame
import time
import numpy as np
import sys
class DataPlotter:
    def __init__(self, lower_exercise_limit1 = None, upper_exercise_limit1 = None, lower_exercise_limit2 = None, upper_exercise_limit2 = None):
        pygame.init()
        pygame.display.init()
        self.screen_width, self.screen_height = 1200, 800
        self.border_margin = 20
        self.left_margin = 100
        self.screen = pygame.display.set_mode((self.screen_width, self.screen_height), pygame.RESIZABLE | pygame.DOUBLEBUF)
        pygame.display.set_caption("Data Plotter")
        self.clock = pygame.time.Clock()
        self.clock.tick(80) # 80 fps       ************ important ************
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
        self.initialize_plot_data()
        self.screen.fill(self.color_white)
        self.boundary_limit = False
        if lower_exercise_limit1 is not None and upper_exercise_limit1 is not None and lower_exercise_limit2 is not None and upper_exercise_limit2 is not None:
            self.lower_exercise_limit1 = lower_exercise_limit1
            self.upper_exercise_limit1 = upper_exercise_limit1
            self.lower_exercise_limit2 = lower_exercise_limit2
            self.upper_exercise_limit2 = upper_exercise_limit2
            self.boundary_limit = True
        else:
            self.boundary_limit = False
        for i in range(0, 5):
            self.screen.fill(self.color_white)
            pygame.display.update()
        self.running = True
    def initialize_plot_data(self):
        self.plot_window = 400
        self.time_current = time.time()
        self.y_var1 = np.array(np.zeros([self.plot_window]))
        self.y_var2 = np.array(np.zeros([self.plot_window]))
        self.y_var3 = np.array(np.zeros([self.plot_window]))
        self.y_var4 = np.array(np.zeros([self.plot_window]))

    # The rest of the class implementation remains the same
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

    def plot_data(self, y_data, color, plot_position, signals_number = 4,  upper_exercise_limit = None, lower_exercise_limit = None):
            
        # max_y and min_y calculations
        if(max(y_data) > 20):
            max_y = max(y_data) * 1.25
        else:
            max_y = 20 * 1.25
            
        if(min(y_data) < -20): 
            min_y = min(y_data)  * 1.25  
        else:
            min_y = -20 * 1.25
        # # Calculate the plot's dimensions
        if self.boundary_limit and upper_exercise_limit is not None and lower_exercise_limit is not None:
            if max_y < upper_exercise_limit:
                max_y = upper_exercise_limit * 1.25
            if min_y > lower_exercise_limit:
                min_y = lower_exercise_limit * 1.25
            
        plot_height = (self.screen_height / 4) - self.border_margin * 2
        if(signals_number == 2):
            plot_height = (self.screen_height / 2) - self.border_margin * 2
        elif(signals_number == 1):
            plot_height = (self.screen_height) - self.border_margin * 2
        upper_bound = plot_position 
        lower_bound = upper_bound + 2 * self.border_margin + plot_height
        section_height = self.screen_height / 4
        plot_width = self.screen_width - self.left_margin - self.border_margin
        color_gray = (200, 200, 200)
        color_light_gray = (230, 230, 230)
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
        current_point = lower_bound - self.border_margin - ((y_data[-1] - min_y) * plot_height / (max_y - min_y))
        if self.boundary_limit and upper_exercise_limit is not None and lower_exercise_limit is not None:
            upper_exercise_limit_point = lower_bound - self.border_margin - ((upper_exercise_limit - min_y) * plot_height / (max_y - min_y))
            lower_exercise_limit_point = lower_bound - self.border_margin - ((lower_exercise_limit - min_y) * plot_height / (max_y - min_y))

        # # Draw Y-axis and half X-axisself..
        # pygame.draw.line(screen, y_axis_color, (plot_width, plot_position), (plot_width, plot_position + plot_height), 2)
        if self.boundary_limit and upper_exercise_limit is not None and lower_exercise_limit is not None:
            # draw upper exercise limit line
            pygame.draw.line(self.screen, pygame.Color(0,0,0), (self.left_margin, upper_exercise_limit_point), (self.left_margin + plot_width, upper_exercise_limit_point), 2)
            # draw lower exercise limit line
            pygame.draw.line(self.screen, pygame.Color(0,0,0), (self.left_margin, lower_exercise_limit_point), (self.left_margin + plot_width, lower_exercise_limit_point), 2)

        # draw 0 point line
        pygame.draw.line(self.screen, color_gray, (self.left_margin - 4, zero_point), (self.left_margin, zero_point), 2)
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
        # draw current point line
        pygame.draw.line(self.screen, color_gray, (self.left_margin - 4, current_point), (self.left_margin, current_point), 2)
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
        self.draw_text(str(int(min_y)), (self.left_margin / 2, min_point), color=(0, 0, 0))
        # current point text at upper right corner
        self.draw_text(str(int(y_data[-1])), (self.left_margin + plot_width -20, max_point + 10), color=(0, 0, 0))    
    
        if self.boundary_limit and upper_exercise_limit is not None and lower_exercise_limit is not None:
            # draw text upper exercise limit
            self.draw_text(str(int(upper_exercise_limit)), (self.left_margin / 2, upper_exercise_limit_point), color=(0, 0, 0))
            # draw text lower exercise limit
            self.draw_text(str(int(lower_exercise_limit)), (self.left_margin / 2, lower_exercise_limit_point), color=(0, 0, 0))
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
            
    def plot_four_signals(self, y_var1, y_var2, y_var3, y_var4):
 
        self.plot_data(y_var1, self.color_blue, (self.screen_height / 4) - (self.screen_height / 4), upper_exercise_limit = self.upper_exercise_limit1, lower_exercise_limit = self.lower_exercise_limit1)  # Blue color for first data set
        self.plot_data(y_var2, self.color_green, (self.screen_height / 2) - (self.screen_height / 4), upper_exercise_limit = self.upper_exercise_limit2, lower_exercise_limit = self.lower_exercise_limit2)  # Red color for second data set
        self.plot_data(y_var3, self.color_red, (self.screen_height * 3 / 4) - (self.screen_height / 4))  # Green color for third data set
        self.plot_data(y_var4, self.color_black, (self.screen_height) - (self.screen_height / 4))  # Black color for fourth data set
        self.draw_text("Data Plotter", (self.screen_width / 2 - 100, 10), vertical=False)
        self.draw_text("Time", (self.screen_width / 2 , self.screen_height - 30), vertical=False)
        self.draw_text("Signal 1", (self.left_margin / 2 - 50, (self.screen_height / 4) - (self.screen_height / 8)), (0, 0, 255), vertical=True)
        self.draw_text("Signal 2", (self.left_margin / 2 - 50, (self.screen_height / 2) - (self.screen_height / 8)), (255, 0, 0), vertical=True)
        self.draw_text("Signal 3", (self.left_margin / 2 - 50, (self.screen_height * 3 / 4) - (self.screen_height / 8)), (0, 255, 0), vertical=True)
        self.draw_text("Signal 4", (self.left_margin / 2 - 50, (self.screen_height) - (self.screen_height / 8)), (255, 0, 255), vertical=True)

    def plot_two_signals(self, y_var1, y_var2, y_var3, y_var4):
        y_var1_2 = y_var1 + y_var2
        y_var3_4 = y_var3 + y_var4
        self.plot_data(y_var1_2, self.color_blue, (self.screen_height / 2) - self.screen_height/2, signals_number=2)  # Blue color for first data set
        self.plot_data(y_var3_4, self.color_green, (self.screen_height) - self.screen_height/2, signals_number=2)  # Red color for second data set
        self.draw_text("Serial Data Plotter", (self.screen_width / 2 - 100, 10), vertical=False)
        self.draw_text("Time", (self.screen_width / 2 , self.screen_height - 30), vertical=False)
        self.draw_text("Load Cell 1 + 2", (self.left_margin / 2 - 50, (self.screen_height / 2) - 100), (0, 0, 255), vertical=True)
        self.draw_text("Load Cell 3 + 4", (self.left_margin / 2 -50, (self.screen_height) - 100), (255, 0, 0), vertical=True)

    def plot_two_signals(self, y_var1, y_var2):
        self.plot_data(y_var1, self.color_blue, (self.screen_height / 2) - self.screen_height/2, signals_number=2)  # Blue color for first data set
        self.plot_data(y_var2, self.color_green, (self.screen_height) - self.screen_height/2, signals_number=2)  # Red color for second data set
        self.draw_text("Serial Data Plotter", (self.screen_width / 2 - 100, 10), vertical=False)
        self.draw_text("Time", (self.screen_width / 2 , self.screen_height - 30), vertical=False)
        self.draw_text("Load Cell 1 + 2", (self.left_margin / 2 - 50, (self.screen_height / 2) - 100), (0, 0, 255), vertical=True)
        self.draw_text("Load Cell 3 + 4", (self.left_margin / 2 -50, (self.screen_height) - 100), (255, 0, 0), vertical=True)

    def plot_one_signal(self, y_var1):
        self.plot_data(y_var1, self.color_blue, self.screen_height - self.screen_height, signals_number=1)
        self.draw_text("Single Signal Plotter", (self.screen_width / 2 - 100, 10), vertical=False)
        self.draw_text("Time", (self.screen_width / 2 , self.screen_height - 30), vertical=False)
        self.draw_text("Signal", (self.left_margin / 2 - 50, (self.screen_height) - 100), (0, 0, 255), vertical=True)
    

    def run(self, y_var1, y_var2):

        running = True
        counter = 0
        counter_reset = 0
        tac_tic = 0
        while running:
            for event in pygame.event.get():
                if event.type == pygame.QUIT or (event.type == pygame.KEYDOWN and event.key == pygame.K_ESCAPE):
                    running = False
            if counter > 1000:
                running = False

            self.y_var1 = np.roll(self.y_var1, -1)
            self.y_var1[-1] = y_var1

            self.y_var2 = np.roll(self.y_var2, -1)
            self.y_var2[-1] = y_var2


            # Update the display
            self.screen.fill(self.color_white)

            if counter % 2:
                tic = time.time()
                # self.plot_four_signals(self.y_var1, self.y_var2, self.y_var3, self.y_var4)
                self.plot_two_signals(self.y_var1, self.y_var2)
                pygame.display.flip()   

                tac_tic = round((time.time() - tic), 3)
                print("Time to plot: ", tac_tic)
            counter += 1
        pygame.quit()    

    def run_once(self, y_var1, y_var2, y_var3 = None, y_var4 = None, upper_limit1 = None, lower_limit1 = None, upper_limit2 = None, lower_limit2 = None):
        if upper_limit1 is not None and lower_limit1 is not None and upper_limit2 is not None and lower_limit2 is not None:
            self.boundary_limit = True
            self.upper_exercise_limit1 = upper_limit1
            self.lower_exercise_limit1 = lower_limit1
            self.upper_exercise_limit2 = upper_limit2
            self.lower_exercise_limit2 = lower_limit2
        # tic = time.time()
        for event in pygame.event.get():
            if event.type == pygame.QUIT    :
                self.running = False
                pygame.quit()
                sys.exit()
            elif event.type == pygame.WINDOWRESIZED:

                self.screen_width = event.x
                self.screen_height = event.y
                #  pygame.display.set_mode((self.screen_width, self.screen_height), pygame.RESIZABLE | pygame.DOUBLEBUF)


        if(self.running == True):

            if y_var3 == None and y_var4 == None:
                self.y_var1 = np.roll(self.y_var1, -1)
                self.y_var1[-1] = y_var1

                self.y_var2 = np.roll(self.y_var2, -1)
                self.y_var2[-1] = y_var2
                        
                self.screen.fill(self.color_white)
                self.plot_two_signals(self.y_var1, self.y_var2)
                # print("Running: ", round((time.time() - tic)*1000, 2))      
                pygame.display.update() 
            elif y_var3 is not None and y_var4 is not None:
               # self.plot_four_signals(y_var1, y_var2, y_var3, y_var4)
                self.y_var1 = np.roll(self.y_var1, -1)
                self.y_var1[-1] = y_var1

                self.y_var2 = np.roll(self.y_var2, -1)
                self.y_var2[-1] = y_var2

                self.y_var3 = np.roll(self.y_var3, -1)
                self.y_var3[-1] = y_var3

                self.y_var4 = np.roll(self.y_var4, -1)
                self.y_var4[-1] = y_var4

                self.screen.fill(self.color_white)
                self.plot_four_signals(self.y_var1, self.y_var2, self.y_var3, self.y_var4)
                # , self.upper_exercise_limit1, self.lower_exercise_limit1, self.upper_exercise_limit2, self.lower_exercise_limit2
                # print("Running: ", round((time.time() - tic)*1000, 2))      
                pygame.display.update()
    def quit(self):
        pygame.quit()
# # Usage example:
# plotter = DataPlotter()
# plotter.run()
