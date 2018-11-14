cmake_minimum_required(VERSION 2.8.3)
project(keti_msgs)

find_package(catkin REQUIRED COMPONENTS
  message_generation
  std_msgs
)

add_message_files(
   FILES
   APM.msg
   ASM.msg
   Misc.msg
   MoConf.msg
   MoVal.msg
)

generate_messages(
   DEPENDENCIES
   std_msgs
)

catkin_package(
  CATKIN_DEPENDS message_runtime std_msgs
)

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)

