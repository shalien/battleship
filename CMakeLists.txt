cmake_minimum_required(VERSION 3.24)
project(battleship C)

set(CMAKE_C_STANDARD 23)

add_compile_options(-Wall)

set(THREADS_PREFER_PTHREAD_FLAG ON)

add_subdirectory(src/battleship_hull)
add_subdirectory(src/harbour)
add_subdirectory(src/battleship_rudder)
add_subdirectory(src/battleship_deck)
