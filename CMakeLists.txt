cmake_minimum_required(VERSION 3.8)

project(sh_keys)

set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(${PROJECT_NAME} "main.cpp")

add_subdirectory(libs/sh_keys)
include_directories(libs/sh_keys)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
        sh_libs::sh_keys_lib
    )