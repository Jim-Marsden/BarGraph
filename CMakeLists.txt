cmake_minimum_required(VERSION 3.17)
project(BarGraph)

set(CMAKE_CXX_STANDARD 20)

add_executable(BarGraph main.cpp)

target_link_libraries(BarGraph glfw)