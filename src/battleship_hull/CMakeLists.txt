cmake_minimum_required(VERSION 3.24)
project(battleship_hull C)

set(CMAKE_C_STANDARD 23)

find_package(Curses REQUIRED)

add_library(${PROJECT_NAME} STATIC siren.c ncurses_utils.c ncurses_utils.h)

target_include_directories(${PROJECT_NAME} PUBLIC source)