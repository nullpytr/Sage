cmake_minimum_required(VERSION 3.16)
project(sage)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(sage INTERFACE)
target_include_directories(sage INTERFACE include)
target_precompile_headers(sage INTERFACE include/sage) # header bundle

add_executable(main examples/Sample.cpp) # example
target_link_libraries(main PRIVATE sage)
