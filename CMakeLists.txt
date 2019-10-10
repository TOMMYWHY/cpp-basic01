cmake_minimum_required(VERSION 3.14)
project(basic01)

set(CMAKE_CXX_STANDARD 14)

add_executable(basic01 main.cpp TestDemo.h)

add_executable(test_struct test_struct.cpp)
add_executable(f_sum f_sum.cpp)

add_executable(const const/main.cpp)
add_executable(reference ./reference/main.cpp)
