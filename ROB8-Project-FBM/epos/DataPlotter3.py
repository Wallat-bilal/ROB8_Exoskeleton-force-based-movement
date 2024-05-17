import pygame
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

    def draw_bar(self, x, y, width, height):
        pygame.draw.rect(self.screen, (0, 0, 255), (x, y, width, height))

    def plot_data(self, data):
        self.screen.fill((255, 255, 255))
        
        max_value = max(data)
        bar_height = int((self.height - 50) * max_value / float(self.height))
        bar_width = int((self.width - 50) / len(data))
        
        x = 25
        y = self.height - bar_height - 25
        self.draw_bar(x, y, bar_width, bar_height)
        
        pygame.display.flip()
        
    def run(self):
        running = True
        while running:
            for event in pygame.event.get():
                if event.type == pygame.QUIT:
                    running = False
            self.clock.tick(60)
        pygame.quit()
    def quit(self):
        pygame.quit()
# # Usage example:
# plotter = DataPlotter()
# plotter.run()



        
    
        
    