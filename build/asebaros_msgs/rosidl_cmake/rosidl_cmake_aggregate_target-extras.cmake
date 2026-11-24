# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target asebaros_msgs::asebaros_msgs
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${asebaros_msgs_TARGETS}.
if(asebaros_msgs_TARGETS AND NOT TARGET asebaros_msgs::asebaros_msgs)
  add_library(asebaros_msgs::asebaros_msgs INTERFACE IMPORTED)
  set_target_properties(asebaros_msgs::asebaros_msgs PROPERTIES
    INTERFACE_LINK_LIBRARIES "${asebaros_msgs_TARGETS}")
endif()
