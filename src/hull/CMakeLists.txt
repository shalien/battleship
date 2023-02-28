cmake_minimum_required(VERSION 3.24)
project(hull C)

set(CMAKE_C_STANDARD 23)

find_package(Curses REQUIRED)

add_library(${PROJECT_NAME} STATIC src/log/siren.c src/curses/curses_utils.c src/curses/curses_utils.h src/utils/array_utils.c src/utils/array_utils.h src/utils/string_utils.c src/utils/string_utils.h)

target_include_directories(${PROJECT_NAME} PUBLIC source)