cmake_minimum_required(VERSION 3.10)
project(linklist)

set(CMAKE_CXX_STANDARD 11)

add_executable(linklist main.cpp Node.cpp Node.h Linklist.cpp Linklist.h)