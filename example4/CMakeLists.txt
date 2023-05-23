cmake_minimum_required(VERSION 3.5)
project(ji)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_INSTALL_PREFIX ${CMAKE_CURRENT_SOURCE_DIR})
set(CMAKE_INSTALL_RPATH ${CMAKE_INSTALL_PREFIX}/lib)


# 使用pkg-config查找必要的依赖包
find_package(OpenCV REQUIRED)
# include_directories("/usr/include/python3.7m")
# LINK_DIRECTORIES("/usr/lib/python3.7/config-3.7m-x86_64-linux-gnu")
# 生成可执行文件
add_executable(test-ji-api ${CMAKE_CURRENT_SOURCE_DIR}/test/test.cpp)
target_link_libraries(test-ji-api
        ${OpenCV_LIBS}
        )
install(TARGETS test-ji-api DESTINATION bin)