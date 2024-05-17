import tkinter as tk
from tkinter import ttk
import threading
import FBMDeg

def update_motor_params():
    hip_position = -int(hip_position_entry.get())  # Invert the hip position input
    knee_position = int(knee_position_entry.get())
    hip_velocity_scale = int(hip_velocity_scale_entry.get())
    knee_velocity_scale = int(knee_velocity_scale_entry.get())
    lock_duration = int(lock_duration_entry.get())
    hip_force_threshold = int(hip_force_threshold_entry.get())
    knee_force_threshold = int(knee_force_threshold_entry.get())

    FBMDeg.motor_controller.move_and_lock_motors(
        hip_position, knee_position, hip_velocity_scale, knee_velocity_scale, lock_duration, hip_force_threshold, knee_force_threshold
    )

def start_ros2_node():
    FBMDeg.main()

# Start ROS2 node in a separate thread
ros2_thread = threading.Thread(target=start_ros2_node)
ros2_thread.start()

# Create UI
root = tk.Tk()
root.title("Motor Control UI")

# Hip Position
tk.Label(root, text="Hip Position (degrees):").grid(row=0, column=0, padx=10, pady=5)
hip_position_entry = tk.Entry(root)
hip_position_entry.grid(row=0, column=1, padx=10, pady=5)

# Knee Position
tk.Label(root, text="Knee Position (degrees):").grid(row=1, column=0, padx=10, pady=5)
knee_position_entry = tk.Entry(root)
knee_position_entry.grid(row=1, column=1, padx=10, pady=5)

# Hip Velocity Scale
tk.Label(root, text="Hip Velocity Scale:").grid(row=2, column=0, padx=10, pady=5)
hip_velocity_scale_entry = tk.Entry(root)
hip_velocity_scale_entry.grid(row=2, column=1, padx=10, pady=5)

# Knee Velocity Scale
tk.Label(root, text="Knee Velocity Scale:").grid(row=3, column=0, padx=10, pady=5)
knee_velocity_scale_entry = tk.Entry(root)
knee_velocity_scale_entry.grid(row=3, column=1, padx=10, pady=5)

# Lock Duration
tk.Label(root, text="Lock Duration (seconds):").grid(row=4, column=0, padx=10, pady=5)
lock_duration_entry = tk.Entry(root)
lock_duration_entry.grid(row=4, column=1, padx=10, pady=5)

# Hip Force Threshold
tk.Label(root, text="Hip Force Threshold:").grid(row=5, column=0, padx=10, pady=5)
hip_force_threshold_entry = tk.Entry(root)
hip_force_threshold_entry.grid(row=5, column=1, padx=10, pady=5)

# Knee Force Threshold
tk.Label(root, text="Knee Force Threshold:").grid(row=6, column=0, padx=10, pady=5)
knee_force_threshold_entry = tk.Entry(root)
knee_force_threshold_entry.grid(row=6, column=1, padx=10, pady=5)

# Update Button
update_button = tk.Button(root, text="Update", command=update_motor_params)
update_button.grid(row=7, column=0, columnspan=2, pady=10)

root.mainloop()

