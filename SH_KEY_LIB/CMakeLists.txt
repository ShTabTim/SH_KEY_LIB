cmake_minimum_required (VERSION 3.8)

project (SH_KEY_LIB VERSION 1.0.0)

add_library(SH_KEY_LIB STATIC 
        "sh_key.h"
        "sh_key_lib_win.cpp"
    ) 

target_include_directories(SH_KEY_LIB
    PUBLIC 
        "sh_key.h"
)