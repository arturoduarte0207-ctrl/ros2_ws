# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target robx7_interfaces::robx7_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${robx7_interfaces_TARGETS}.
if(robx7_interfaces_TARGETS AND NOT TARGET robx7_interfaces::robx7_interfaces)
  add_library(robx7_interfaces::robx7_interfaces INTERFACE IMPORTED)
  set_target_properties(robx7_interfaces::robx7_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${robx7_interfaces_TARGETS}")
endif()
