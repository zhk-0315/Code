cmake_minimum_required(VERSION 3.0.0)
project(Tclass VERSION 0.1.0)

set(CMAKE_VERBOSE_MAKEFILE 1)
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

set(CMAKE_C_COMPILER /opt/llvm_bin/clang)
set(CMAKE_CXX_COMPILER /opt/llvm_bin/clang++)

include_directories(Class)

file(GLOB CXX_SRCS ./Class/*.cpp)

add_executable(Tclass main.cpp ${CXX_SRCS})
