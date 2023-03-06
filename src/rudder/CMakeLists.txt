cmake_minimum_required(VERSION 3.24)
project(rudder C)

set(CMAKE_C_STANDARD 23)

add_compile_options(-Wall)

find_package(Threads REQUIRED)
find_package(Curses REQUIRED)

find_library(MENU_LIBRARY menu)

include_directories(${CURSES_INCLUDE_DIR})

add_executable(${PROJECT_NAME} src/main.c src/window.c src/context/main_menu.c src/context/main_menu.h src/context.c src/context.h)

target_link_libraries(${PROJECT_NAME} PRIVATE hull Threads::Threads ${MENU_LIBRARY} ${CURSES_LIBRARIES})
