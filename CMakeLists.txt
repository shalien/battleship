cmake_minimum_required(VERSION 3.24)
project(battleship LANGUAGES C VERSION 0.0.1)

set(CMAKE_C_STANDARD 23)

add_compile_options(-Wall)

set(THREADS_PREFER_PTHREAD_FLAG ON)

add_subdirectory(src/hull)
add_subdirectory(src/harbour)
add_subdirectory(src/rudder)
add_subdirectory(src/deck)
