# 设置Cmake版本要求及本项目名称与版本
cmake_minimum_required(VERSION 3.10)
project(demo VERSION 1.0)

# 设置所需使用C++标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(testconfig.h.in testconfig.h)

# 由源码生成可执行文件
add_executable(demo test.cxx)

# 通过头文件将版本号传递给源文件
target_include_directories(demo PUBLIC 
                           "${PROJECT_BINARY_DIR}"
                          )   

# 添加依赖库
