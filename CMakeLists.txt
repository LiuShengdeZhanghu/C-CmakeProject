cmake_minimum_required(VERSION 3.15)
project(Learn)

set(CMAKE_CXX_STANDARD 14)

# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)

# 添加src子目录
add_subdirectory(src)

# 指定生成目标
add_executable(Learn main.cpp)

# 添加链接库
target_link_libraries(Learn DemoFunctions)