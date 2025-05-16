# ?CMake 最低版本要求 (推荐指定一个你系统中安装的或更新的版本)
# VERSION 3.10 是一个比较常用的起点，如果你的 CMake 版本更高，可以适当提高
# 这一行确保了你的 CMakeLists.txt 文件能在指定版本及以上的 CMake 环境中正确解析和执行
cmake_minimum_required(VERSION 3.10)

# ?定义项目名称和所用语言
# project() 命令用于定义项目的名称，这里我们叫它 "CPP_Practice_Project"
# CXX 表示这是一个 C++ 项目。CMake 会自动探测并配置 C++ 编译器 (如 g++, Clang, MSVC 等)
# LANGUAGES CXX 明确指定项目语言是 C++
project(CPP_Practice_Project LANGUAGES CXX)

# ?设置 C++ 标准 (推荐使用较新的标准以利用现代 C++特性)
# CMAKE_CXX_STANDARD 变量用于指定项目应使用的 C++ 标准
# 例如：11 (C++11), 14 (C++14), 17 (C++17), 20 (C++20)
set(CMAKE_CXX_STANDARD 17)
# CMAKE_CXX_STANDARD_REQUIRED ON 表示必须使用指定的标准，如果编译器不支持，则会报错
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# CMAKE_CXX_EXTENSIONS OFF 表示不使用编译器特定的扩展，以保持代码的可移植性
set(CMAKE_CXX_EXTENSIONS OFF)


#? 添加子目录
# add_subdirectory() 命令告诉 CMake 去指定的子目录中查找另一个 CMakeLists.txt 文件并处理它
# 这样可以将项目的不同模块或部分的构建逻辑分离开来，使顶层文件更简洁
add_subdirectory(src) # 这里我们告诉 CMake 去 "src" 目录下查找并处理那里的 CMakeLists.txt 文件

# 你可以在这里添加更多项目级的配置，例如：
# - include_directories(): 添加头文件搜索路径
# - link_directories(): 添加库文件搜索路径
# - find_package(): 查找并加载外部库 (如 Boost, Qt 等)

# 打印一条消息，表示顶层 CMakeLists.txt 配置完成
message(STATUS "顶层 CMakeLists.txt 配置完成。项目名称: ${PROJECT_NAME}")