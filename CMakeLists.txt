cmake_minimum_required(VERSION 3.12)
project(fraction)

set(CMAKE_CXX_STANDARD 14)

add_executable(fraction src/main.cc src/fraction.cc)
include_directories(include/)