cmake_minimum_required(VERSION 3.5)
project(hello)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_INSTALL_PREFIX ${CMAKE_CURRENT_SOURCE_DIR})
set(CMAKE_INSTALL_RPATH ${CMAKE_INSTALL_PREFIX}/lib)


# 生成可执行文件
include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)
add_executable(test-ji-api ${CMAKE_CURRENT_SOURCE_DIR}/test/test.cpp)
install(TARGETS test-ji-api DESTINATION bin)