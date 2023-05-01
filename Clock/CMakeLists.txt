cmake_minimum_required(VERSION 3.25)
project(Clock)

set(CMAKE_CXX_STANDARD 23)

add_executable(Clock main.cpp Headers/clock.cpp Headers/clock.h)
