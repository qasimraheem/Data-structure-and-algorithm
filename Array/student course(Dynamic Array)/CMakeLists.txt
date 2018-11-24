cmake_minimum_required(VERSION 3.10)
project(student_course)

set(CMAKE_CXX_STANDARD 14)

add_executable(student_course main.cpp Student.cpp Student.h Course.cpp Course.h)