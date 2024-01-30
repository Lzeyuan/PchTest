cmake_minimum_required (VERSION 3.25)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(PchTest)

aux_source_directory(test MY_SOURCES)
add_executable(
    ${PROJECT_NAME}
    main.cpp
    ${MY_SOURCES}
)

add_subdirectory(3rd)
add_subdirectory(base)

target_link_libraries(
    ${PROJECT_NAME}
    PRIVATE
    base
)

target_precompile_headers(
    ${PROJECT_NAME}
    REUSE_FROM
    base
)