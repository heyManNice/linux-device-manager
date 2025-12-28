cmake_minimum_required(VERSION 3.16)

project(linux-device-manager LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_compile_options(-Wall -Wextra -Wpedantic)

include_directories(${CMAKE_SOURCE_DIR}/src)

file(GLOB_RECURSE SOURCES 
    "${CMAKE_SOURCE_DIR}/src/*.cpp"
)

find_package(PkgConfig REQUIRED)

pkg_check_modules(GTKMM REQUIRED gtkmm-3.0)

add_executable(ldm ${SOURCES})

target_include_directories(ldm PRIVATE ${GTKMM_INCLUDE_DIRS})
target_link_libraries(ldm PRIVATE ${GTKMM_LIBRARIES})
target_compile_options(ldm PRIVATE ${GTKMM_CFLAGS_OTHER})