cmake_minimum_required(VERSION 3.5)
project(hello)
# C++11
set(CMAKE_CXX_STANDARD 11)
# 设置安装路径
set(CMAKE_INSTALL_PREFIX ${CMAKE_CURRENT_SOURCE_DIR})
# 查找指定目录下所有源文件，将名称保存到声明的变量
aux_source_directory(./src hello_src)
# 生成动态库libhello.so（linux后缀名是.so，macos是.dylib）
add_library(hello SHARED ${hello_src})
# 添加头文件
target_include_directories(hello PUBLIC ./include)
# 将hello.so插入到lib路径下
install(TARGETS hello LIBRARY DESTINATION lib)