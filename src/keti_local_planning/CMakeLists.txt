cmake_minimum_required(VERSION 2.8.3)
project(keti_local_planning)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  geometry_msgs
  tf
  autoware_msgs
  mobileye_560_660_msgs
)

find_package(Eigen3 REQUIRED)

catkin_package(
  INCLUDE_DIRS include
  LIBRARIES
  CATKIN_DEPENDS
  roscpp
  geometry_msgs
  tf
  autoware_msgs
  mobileye_560_660_msgs
)

SET(CMAKE_CXX_FLAGS "-O2 -g -Wall -Wno-unused-result -DROS ${CMAKE_CXX_FLAGS}")
if ("${ROS_VERSION}" MATCHES "(kinetic)")
    SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DROS_KINETIC")
endif ()

include_directories(
 include include/data_classes include/data_handler include/utils
 ${catkin_INCLUDE_DIRS}
 ${EIGEN3_INCLUDE_DIR}
)

add_executable(keti_local_planning
  src/ketilocalplanning_main.cpp
  src/cketilocalplanning.cpp
  src/data_handler/lane_handler.cpp
  src/data_handler/lanearray_handler.cpp
  src/data_handler/pose_point_handler.cpp
  src/utils/angle_utils.cpp
  src/ros_helpers.cpp
  src/utils/curve_fitting.cpp
  )
target_link_libraries(keti_local_planning
    ${catkin_LIBRARIES}
    )
add_dependencies(keti_local_planning
        ${catkin_EXPORTED_TARGETS}
        )
