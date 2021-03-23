cmake_minimum_required(VERSION 3.19)
project(CaesarCipherCPP)

set(CMAKE_CXX_STANDARD 14)

#list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")

add_executable(CaesarCipherCPP main.cpp)
#
#include(FindPkgConfig)
#find_package(CPPStaticLibs REQUIRED)
#include_directories(${CPPSTATICLIBS_INCLUDE_DIR})
#target_link_libraries(${PROJECT_NAME} ${CPPSTATICLIBS_LIBRARY})