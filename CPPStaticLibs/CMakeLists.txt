cmake_minimum_required(VERSION 3.19)
project(CPPStaticLibs)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES include/shared-utils.h include/shared-utils.cpp)

add_library(CPPStaticLibs "${SOURCE_FILES}")