cmake_minimum_required(VERSION 3.0)

project(twofer)

add_executable(twofer main.cpp)

install(TARGETS twofer RUNTIME DESTINATION bin)
