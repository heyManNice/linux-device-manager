cmake_minimum_required(VERSION 3.16)

project(linux-device-manager LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_compile_options(-Wall -Wextra -Wpedantic)

set(SOURCES
    src/main.cpp
)

add_executable(ldm ${SOURCES})

