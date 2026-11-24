# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target thymio_msgs::thymio_msgs
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${thymio_msgs_TARGETS}.
if(thymio_msgs_TARGETS AND NOT TARGET thymio_msgs::thymio_msgs)
  add_library(thymio_msgs::thymio_msgs INTERFACE IMPORTED)
  set_target_properties(thymio_msgs::thymio_msgs PROPERTIES
    INTERFACE_LINK_LIBRARIES "${thymio_msgs_TARGETS}")
endif()
