cmake_minimum_required(VERSION 3.5)

project(QueenAttackExercise LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(QueenAttackExercise main.cpp)

install(TARGETS QueenAttackExercise
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
