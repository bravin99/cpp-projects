cmake_minimum_required(VERSION 3.0)

project(collatzconjecture)

add_executable(collatzconjecture main.cpp)

install(TARGETS collatzconjecture RUNTIME DESTINATION bin)
