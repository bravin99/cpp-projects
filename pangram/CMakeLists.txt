cmake_minimum_required(VERSION 3.0)

project(pangram)

add_executable(pangram main.cpp)

install(TARGETS pangram RUNTIME DESTINATION bin)
