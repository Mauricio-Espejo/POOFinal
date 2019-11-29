cmake_minimum_required(VERSION 3.14)
project(prueba)

set(CMAKE_CXX_STANDARD 14)

add_executable(prueba main.cpp warehouse_t.cpp warehouse_t.h slot_t.cpp slot_t.h producto_t.h producto_t.cpp robot_t.h robot_t.cpp)