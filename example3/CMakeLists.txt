cmake_minimum_required(VERSION 3.5)
project(hello)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_INSTALL_PREFIX ${CMAKE_CURRENT_SOURCE_DIR})
set(CMAKE_INSTALL_RPATH ${CMAKE_INSTALL_PREFIX}/lib)

# # 使用pkg-config查找必要的依赖包
# find_package(OpenCV REQUIRED)

link_directories(${CMAKE_CURRENT_SOURCE_DIR}/3rd/hello/lib)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/3rd/hello/lib/libhello.so DESTINATION lib) 

# 生成可执行文件
include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${CMAKE_CURRENT_SOURCE_DIR}/3rd/hello/include
)
add_executable(test-ji-api ${CMAKE_CURRENT_SOURCE_DIR}/test/test.cpp)
target_link_libraries(test-ji-api
        ${PROJECT_NAME}
        # ${OpenCV_LIBS}
        )
install(TARGETS test-ji-api DESTINATION bin)