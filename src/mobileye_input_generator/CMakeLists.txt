cmake_minimum_required(VERSION 2.8.3)
project(mobileye_input_generator)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  tf
  keti_local_planning
)

catkin_package(
  INCLUDE_DIRS include
  LIBRARIES mobileye_input_generator
  CATKIN_DEPENDS roscpp tf keti_local_planning
#  DEPENDS system_lib
)

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)


## Declare a C++ library
#add_library(libdp_planner lib/libdp_planner.cpp)

link_directories(lib)

add_executable(mobileye_input_generator src/mobileye_input_generator_main.cpp src/mobileye_input_generator.cpp)
target_link_libraries(mobileye_input_generator ${catkin_LIBRARIES})
add_dependencies(mobileye_input_generator
        ${catkin_EXPORTED_TARGETS}
        )
