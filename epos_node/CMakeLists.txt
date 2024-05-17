cmake_minimum_required(VERSION 3.5)
project(epos_node)

# Find ROS 2 dependencies
find_package(ament_cmake REQUIRED)
find_package(rclpy REQUIRED)

# Install package files
ament_python_install_package(${PROJECT_NAME})

# Build and install package
ament_package()
