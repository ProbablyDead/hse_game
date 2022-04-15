cmake_minimum_required(VERSION 3.21)
project(hse_game C)

set(CMAKE_C_STANDARD 23)
link_libraries(ws2_32)
add_executable(hse_game main.c)
