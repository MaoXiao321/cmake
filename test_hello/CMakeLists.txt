cmake_minimum_required(VERSION 3.5)
project(test_hello)
# C++11
set(CMAKE_CXX_STANDARD 11)
# 设置安装路径
set(CMAKE_INSTALL_PREFIX ${CMAKE_CURRENT_SOURCE_DIR})

# 添加库搜索地址
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/3rd/hello/lib)
# 生成可执行文件
add_executable(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp)
# 头文件地址
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/3rd/hello/include)
# 把目标文件和库文件连接起来
target_link_libraries(${PROJECT_NAME} libhello.so)

# 将hello.so插入到lib路径下
install(TARGETS ${PROJECT_NAME} DESTINATION bin)




