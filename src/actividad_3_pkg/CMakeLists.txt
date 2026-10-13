cmake_minimum_required(VERSION 3.8)
project(actividad_3_pkg)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_srvs REQUIRED)
find_package(robx7_interfaces REQUIRED)

add_executable(emulator_node src/emulator_node.cpp)
target_link_libraries(emulator_node PUBLIC
  rclcpp::rclcpp
  ${robx7_interfaces_TARGETS}
)

add_executable(monitor_node src/monitor_node.cpp)
target_link_libraries(monitor_node PUBLIC
  rclcpp::rclcpp
  ${std_srvs_TARGETS}
  ${robx7_interfaces_TARGETS}
)

add_executable(operator_node src/operator_node.cpp)
target_link_libraries(operator_node PUBLIC
  rclcpp::rclcpp
  ${std_srvs_TARGETS}
)

install(TARGETS
  emulator_node
  monitor_node
  operator_node
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
)

ament_package()