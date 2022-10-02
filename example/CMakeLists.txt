cmake_minimum_required (VERSION 3.8)

project (example)

add_executable(example "main.cpp")

include_directories(../SH_KEY_LIB)
target_link_libraries(example PRIVATE SH_KEY_LIB)