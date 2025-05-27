cmake_minimum_required(VERSION 3.10)
project(my_opencv)

find_package(OpenCV REQUIRED)

add_executable(hello a01_helloWorld.cpp)

target_link_libraries(hello ${OpenCV LIBS})