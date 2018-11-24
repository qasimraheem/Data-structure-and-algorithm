cmake_minimum_required(VERSION 3.10)
project(circular_linklist)

set(CMAKE_CXX_STANDARD 14)

add_executable(circular_linklist main.cpp Node.cpp Node.h Linklist_Circular.cpp Linklist_Circular.h)