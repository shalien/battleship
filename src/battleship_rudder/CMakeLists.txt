cmake_minimum_required(VERSION 3.24)
project(battleship_rudder C)

set(CMAKE_C_STANDARD 23)

add_compile_options(-Wall)

find_package(Threads REQUIRED)
find_package(Curses REQUIRED)

include_directories(${CURSES_INCLUDE_DIR})

add_executable(${PROJECT_NAME} main.c window.c)

target_link_libraries(${PROJECT_NAME} PRIVATE battleship_hull Threads::Threads ${CURSES_LIBRARIES})
