cmake_minimum_required(VERSION 3.8)
project(demo_pubsub_pkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)

add_executable(publisher_cpp src/publisher_cpp.cpp)
ament_target_dependencies(publisher_cpp rclcpp std_msgs)

add_executable(subscriber_cpp src/subscriber_cpp.cpp)
ament_target_dependencies(subscriber_cpp rclcpp std_msgs)

install(TARGETS
  publisher_cpp
  subscriber_cpp
  DESTINATION lib/${PROJECT_NAME})

install(PROGRAMS
  demo_pubsub_pkg/publisher_py.py
  demo_pubsub_pkg/subscriber_py.py
  DESTINATION lib/${PROJECT_NAME})

ament_package()
