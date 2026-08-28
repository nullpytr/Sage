cmake_minimum_required(VERSION 3.14)
project(include)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(
        main
        examples/Sample.cpp
)

target_include_directories(main PUBLIC lib include)
