cmake_minimum_required(VERSION 3.14)
project(Sage)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(
        main
        examples/Example.cpp
)

target_include_directories(main PUBLIC include)
