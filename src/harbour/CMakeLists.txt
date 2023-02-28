cmake_minimum_required(VERSION 3.24)
project(harbour LANGUAGES C VERSION 0.0.1)

set(CMAKE_C_STANDARD 23)

find_package(Threads)

add_executable(${PROJECT_NAME} src/main.c src/server.c src/server.h src/demon.c src/demon.h src/main.h)

target_link_libraries(${PROJECT_NAME} PRIVATE hull Threads::Threads)
