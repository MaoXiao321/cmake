cmake_minimum_required(VERSION 3.5)
project(hello)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_INSTALL_PREFIX ${CMAKE_CURRENT_SOURCE_DIR})
set(CMAKE_INSTALL_RPATH ${CMAKE_INSTALL_PREFIX}/lib)

# # 使用pkg-config查找必要的依赖包
# find_package(OpenCV REQUIRED)

# project include
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
# source
file(GLOB OCR_SRC ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
set(OCR_COMPILE_CODE ${OCR_SRC})

add_library(${PROJECT_NAME} SHARED ${OCR_COMPILE_CODE} )
target_link_libraries(${PROJECT_NAME}  
        # ${OpenCV_LIBS}
        )
target_include_directories(${PROJECT_NAME}  
        PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include 
        # PUBLIC ${OpenCV_INCLUDE_DIRS}
        )   
install(TARGETS ${PROJECT_NAME} LIBRARY DESTINATION lib)