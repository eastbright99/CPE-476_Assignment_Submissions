cmake_minimum_required(VERSION 3.0.2)
project(assn2)

find_package(catkin REQUIRED COMPONENTS
  geometry_msgs
  roscpp
  std_msgs
)

catkin_package()

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)

add_executable(driver src/driver.cpp)
target_link_libraries(driver ${catkin_LIBRARIES})

add_executable(controller src/controller.cpp)
target_link_libraries(controller ${catkin_LIBRARIES})

