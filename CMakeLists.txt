cmake_minimum_required(VERSION 3.25)
project(cplusplus)

set(CMAKE_CXX_STANDARD 17)

add_executable(main main.cpp)
add_executable(intro basics/intro.cpp)
add_executable(namespace basics/namespace.cpp)

add_executable(variables basics/variables.cpp)
