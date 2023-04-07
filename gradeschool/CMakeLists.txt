cmake_minimum_required(VERSION 3.0)

project(gradeschool)

add_executable(gradeschool main.cpp)

install(TARGETS gradeschool RUNTIME DESTINATION bin)
