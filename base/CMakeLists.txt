cmake_minimum_required (VERSION 3.25)

project(base)

add_library(
    ${PROJECT_NAME}
    STATIC
    stdafx.cpp
)

target_include_directories(
    ${PROJECT_NAME}
    PUBLIC
    "/"
)

target_link_libraries(
    ${PROJECT_NAME}
    PUBLIC
    glfw
    glad
)

target_precompile_headers(
    ${PROJECT_NAME}
    PUBLIC
    stdafx.h
)