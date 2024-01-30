cmake_minimum_required (VERSION 3.25)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(PchTest)

add_executable(
    ${PROJECT_NAME}
    main.cpp
    test/test1.cpp
    test/test2.cpp
    test/test3.cpp
    test/test4.cpp
    test/test5.cpp
    test/test6.cpp
    test/test7.cpp
    test/test8.cpp
    test/test9.cpp
    test/test10.cpp
    test/test11.cpp
    test/test12.cpp
    test/test13.cpp
    test/test14.cpp
    test/test15.cpp
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