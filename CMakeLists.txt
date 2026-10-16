cmake_minimum_required(VERSION 3.28)

set(CMAKE_C_STANDARD 23)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

project(html LANGUAGES C)

set(SRC_FILES src/main.c)
add_executable(html ${SRC_FILES})
