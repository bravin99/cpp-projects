cmake_minimum_required(VERSION 3.25)
project(AtbashCipher)

set(CMAKE_CXX_STANDARD 23)

add_executable(AtbashCipher main.cpp atbash_cipher.cpp atbash_cipher.h)
