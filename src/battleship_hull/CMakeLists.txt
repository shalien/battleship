cmake_minimum_required(VERSION 3.24)
project(battleship_hull C)

set(CMAKE_C_STANDARD 23)

add_library(${PROJECT_NAME} STATIC siren.c logo.h logo.c)

target_include_directories(${PROJECT_NAME} PUBLIC source)