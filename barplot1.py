import pygame
import sys
import numpy as np

class SignalVisualization: 

    def __init__(self, low_value1, up_value1, name_windows):
        pygame.init()
    
        pygame.display.init()
        self.WIDTH, self.HEIGHT = 800, 600  # Adjusted default screen height
        self.screen = pygame.display.set_mode((self.WIDTH, self.HEIGHT), pygame.RESIZABLE | pygame.DOUBLEBUF)
        pygame.display.set_caption(name_windows)

        # Constants
        self.BAR_WIDTH = (self.WIDTH * 0.5)  # Increased bar width
        self.BAR_HEIGHT = (self.HEIGHT * 0.90)  # Increased bar height
        self.BAR_PADDING = 200  # Adjust padding if necessary
        self.RECTANGLE_WIDTH = self.BAR_WIDTH + 40  # Adjust rectangle width accordingly
        self.RECTANGLE_HEIGHT = self.BAR_HEIGHT + 60  # Adjust rectangle height accordingly
        self.current_loop = 0
  

        # Colors
        self.WHITE = (255, 255, 255)
        self.RED = (255, 0, 0)
        self.GREEN = (0, 255, 0)
        self.BLUE = (0, 0, 255)
        self.BLACK = (0, 0, 0)
        self.list_force = []

        # Fonts
        self.FONT_SIZE = 24
        self.font = pygame.font.Font(None, self.FONT_SIZE)
        self._low_value1 = low_value1
        self._up_value1 = up_value1
        
        self.clock = pygame.time.Clock()
        pygame.display.update()


    def draw_bar(self, surface, x, y, width, height, color):
        pygame.draw.rect(surface, color, pygame.Rect(x, y, width, height))

    def draw_label(self, surface, text, x, y, color):
        label = self.font.render(text, True, color)
        surface.blit(label, (x, y))

    #def get_color(self, signal):
     #   if self._low_value1 <= signal <= self._up_value1 : 
      #      return self.GREEN 
       # else :
        #    return self.RED
        

    def sinusoidal_signal(self, amplitude, frequency, phase_shift, time):
        return amplitude * np.sin(2 * np.pi * frequency * time + phase_shift)

    def compute_signals(self, amplitude, frequency, phase_shift, time_elapsed):
        return abs(self.sinusoidal_signal(amplitude, frequency, phase_shift, time_elapsed))

    def draw_bar_plot(self, screen, torque_signal, x, y, low_value, up_value):
        factor = 5 # to enlarge the graph, the same factor than subscriber2.py 
        # Draw the black border
        rect_x = x - (self.RECTANGLE_WIDTH - self.BAR_WIDTH) // 2
        rect_y = y + (1 - up_value / self.BAR_HEIGHT) * self.BAR_HEIGHT - 20
        rect_width = self.RECTANGLE_WIDTH
        rect_height = (up_value - low_value) / self.BAR_HEIGHT * self.BAR_HEIGHT +  40 
        border_width = 3 # Adjust the border width as desired
        

        # Draw the bar plot
        if low_value <= torque_signal*factor <= up_value:
            color = self.GREEN
        else:
            color = self.RED
    
        height = int(torque_signal*factor) if int(torque_signal) < self.BAR_HEIGHT else self.BAR_HEIGHT
        self.draw_bar(screen, x, y + self.BAR_HEIGHT - height, self.BAR_WIDTH, height, color)
        pygame.draw.rect(screen, self.BLACK, pygame.Rect(rect_x, rect_y, rect_width, rect_height), border_width)
        self.draw_label(screen, f"Torque: {torque_signal:.2f}", x, y + self.BAR_HEIGHT + 10, self.BLACK)
        self.draw_label(screen, f"loop count: {self.current_loop}", x + 130, y + self.BAR_HEIGHT + 10, self.BLACK)


    def _main(self, value, _loop_counter = None):
        window_width = self.BAR_WIDTH + self.BAR_PADDING
        window_height = self.BAR_HEIGHT + 2 * self.BAR_PADDING
        self.list_force.append(value)
        
        if _loop_counter is not None:#and _loop_counter != self.current_loop
            self.current_loop = _loop_counter+1

        # Define torque signal parameters
        amplitude = 150
        frequency = 0.1
        phase_shift = 0
        start_ticks = pygame.time.get_ticks()

        
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                pygame.quit()
                sys.exit()
            elif event.type == pygame.WINDOWRESIZED:
                self.WIDTH = event.x
                self.HEIGHT = event.y
                # pygame.display.set_mode((self.WIDTH, self.HEIGHT), pygame.RESIZABLE | pygame.DOUBLEBUF)

        self.screen.fill(self.WHITE)

        time_elapsed = (pygame.time.get_ticks() - start_ticks) / 1000.0
        

        # Calculate the position for the bar plot
        x = (self.WIDTH - window_width) // 2
        y = (self.HEIGHT - window_height) // 2 + self.BAR_PADDING

        # Draw the black border and bar plot
        self.draw_bar_plot(self.screen, value, x, y, self._low_value1, self._up_value1)

        pygame.display.update()
        

if __name__ == '__main__':
    visualization = SignalVisualization()
    visualization.main()
