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

    def plot_data(self, y_data, color):
            
        plot_x = self.left_margin
        plot_y = self.screen_height / 2
        bar_width = 10
        bar_height = int(y_data[-1])
        bar_color = color

        pygame.draw.rect(self.screen, bar_color, (plot_x, plot_y, bar_width, -bar_height))
        pygame.draw.rect(self.screen, self.color_black, (plot_x, plot_y, bar_width, -self.plot_height), width=1)

            
    
    def run(self, y_var1):

        running = True
        counter = 0
        #counter_reset = 0
        tac_tic = 0
        while running:
            for event in pygame.event.get():
                if event.type == pygame.QUIT or (event.type == pygame.KEYDOWN and event.key == pygame.K_ESCAPE):
                    running = False
            if counter > 1000:
                running = False

            self.y_var1 = np.roll(self.y_var1, -1)
            self.y_var1[-1] = y_var1

            #self.y_var2 = np.roll(self.y_var2, -1)
            #self.y_var2[-1] = y_var2


            # Update the display
            self.screen.fill(self.color_white)

            if counter % 2:
                tic = time.time()
                # self.plot_four_signals(self.y_var1, self.y_var2, self.y_var3, self.y_var4)
                self.plot_two_signals(self.y_var1)
                pygame.display.flip()   

                tac_tic = round((time.time() - tic), 3)
                print("Time to plot: ", tac_tic)
            counter += 1
        pygame.quit()    

    def run_once(self, y_var1, y_var3 = None, y_var4 = None, upper_limit1 = None, lower_limit1 = None, upper_limit2 = None, lower_limit2 = None):
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

                #self.y_var2 = np.roll(self.y_var2, -1)
                #self.y_var2[-1] = y_var2
                        
                self.screen.fill(self.color_white)
                
                # print("Running: ", round((time.time() - tic)*1000, 2))      
                pygame.display.update() 
            elif y_var3 is not None and y_var4 is not None:
               # self.plot_four_signals(y_var1, y_var2, y_var3, y_var4)
                self.y_var1 = np.roll(self.y_var1, -1)
                self.y_var1[-1] = y_var1

                #self.y_var2 = np.roll(self.y_var2, -1)
                #self.y_var2[-1] = y_var2

                self.y_var3 = np.roll(self.y_var3, -1)
                self.y_var3[-1] = y_var3

                self.y_var4 = np.roll(self.y_var4, -1)
                self.y_var4[-1] = y_var4

                self.screen.fill(self.color_white)
                #self.plot_four_signals(self.y_var1, self.y_var3, self.y_var4)
                # , self.upper_exercise_limit1, self.lower_exercise_limit1, self.upper_exercise_limit2, self.lower_exercise_limit2
                # print("Running: ", round((time.time() - tic)*1000, 2))      
                pygame.display.update()
    def quit(self):
        pygame.quit()
# # Usage example:
# plotter = DataPlotter()
# plotter.run()
