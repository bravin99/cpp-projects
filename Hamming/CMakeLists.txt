cmake_minimum_required(VERSION 3.0)

project(hamming)

add_executable(hamming main.cpp)

install(TARGETS hamming RUNTIME DESTINATION bin)
