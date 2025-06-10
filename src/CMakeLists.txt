# src/CMakeLists.txt
# 这个文件由顶层的 CMakeLists.txt 通过 add_subdirectory(src) 命令调用。

# 它不需要再次调用 project() 命令。 什么是project()命令？
# 答：project() 命令用于定义项目的名称，并设置项目的一些基本属性。


#?设置可执行文件的输出路径 
# CMAKE_RUNTIME_OUTPUT_DIRECTORY 变量指定生成的可执行文件（.exe 文件在 Windows 上）存放的目录。
# ${CMAKE_BINARY_DIR} 是 CMake 配置时指定的构建目录的根路径 (例如 "build" 目录)。
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)# 将可执行文件统一输出到构建目录下的 "bin" 文件夹中，这样更整洁。

#? 为每个练习题源文件添加一个可执行目标
# add_executable() 命令格式是: add_executable(可执行文件名 源文件名1 [源文件名2 ...])
# "可执行文件名" 是你希望生成的目标文件的名称
# "源文件名" 是构成该可执行文件的 .cpp 文件

# 练习题 7: 7_display_characters.cpp
add_executable(Exercise7_DisplayCharacters 7_display_characters.cpp)
# 解释:
# - "Exercise7_DisplayCharacters" 是编译后生成的可执行文件的名字。
# - "7_display_characters.cpp" 是包含 main() 函数的源文件。

# 练习题 8: 8_String_reversal.cpp
add_executable(Exercise8_StringReversal 8_String_reversal.cpp)

# 练习题 9: 9_two_dimensional_array.cpp
add_executable(Exercise9_TwoDimArray 9_two_dimensional_array.cpp)

# 练习题: length_of_characters.cpp
add_executable(LengthOfChars length_of_characters.cpp)

# 练习题: Play_chararcters.cpp (文件名中的 "chararcters" 可能是 "characters" 的笔误)
add_executable(PlayCharacters Play_chararcters.cpp)

# 练习题: Judge_the_month-by_the_numbers.cpp
add_executable(JudgeMonthByNumbers Judge_the_month-by_the_numbers.cpp)

# 练习题: cycle_count.cpp
add_executable(CycleCount cycle_count.cpp)

# 练习题: cycle_select.cpp
add_executable(CycleSelect cycle_select.cpp)

# 练习题: choose_girl.cpp
add_executable(ChooseGirl choose_girl.cpp)

# 练习题: int_to_string.cpp
add_executable(Exercise10_IntToString 10_int_to_string.cpp)

# 练习题13: strcat.cpp
add_executable(Exercise13_Strcat 13_strcat.cpp)

# 练习题14: strchr.cpp
add_executable(Exercise14_Strchr 14_strchr.cpp)

# 练习题15: strcmp.cpp
add_executable(Exercise15_Strcmp 15_strcmp.cpp)


# 练习题17: delete_characters.cpp
add_executable(Exercise17_DeleteCharacters 17_deletechr.cpp)

# --- 关于目标属性 (可选高级用法) ---
# 如果某个练习题需要特殊的编译选项、包含目录或链接库，你可以使用 target_* 系列命令:
#
# 例如，如果 "Exercise10_MyTenth" 需要包含项目根目录下的 "common_headers" 文件夹：
# target_include_directories(Exercise10_MyTenth PRIVATE ${PROJECT_SOURCE_DIR}/common_headers)
#
# 如果需要链接一个名为 "MyHelperLibrary" 的库 (假设该库也由 CMake 构建或通过 find_package 找到):
# target_link_libraries(Exercise10_MyTenth PRIVATE MyHelperLibrary)

# 打印一条消息，表示 src/CMakeLists.txt 已被处理
# ${CMAKE_CURRENT_SOURCE_DIR} 是 CMake 正在处理的当前 CMakeLists.txt 文件所在的源目录路径。
message(STATUS "src/CMakeLists.txt 配置完成。正在处理目录: ${CMAKE_CURRENT_SOURCE_DIR}")







