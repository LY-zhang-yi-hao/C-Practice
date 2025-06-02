#include <iostream>
#include <string>

/*
有两个任务：
1）为了支持把 C 风格的字符串转换成数字，C++提供了以下四个函数：
int atoi(const char *_String); // 把 C 风格字符串转换为 int 整数。
long atol(const char *_String); // 把 C 风格字符串转换为 long 整数。
long long atoll(const char *_String); // 把 C 风格字符串转换为 long long 整数。
double atof(const char *_String); // 把 C 风格字符串转换为 double 浮点数。
注意：a）如果字符串中间有非法字符，后面的内容将丢弃；b）如果字符串的第一个字符非法或字
符串为空，将返回 0。
2）从界面上输入一个 C 风格的字符串（二进制或十进制），把它转换成整数，类似 atoi()函数。
"4358"
int result=0;
转换的结果。
第一次：把字符4拿出来
result='4'-'0';
4
第二次：把字符3拿出来
result=result*10; 40
result=40 + '3'-'0' 43
第三次：把字符5拿出来
result=result*10; 430
result=430 + '5'-'0' 435
第四次：把字符8拿出来
result=result*10; 4350
result=4350 + '8'-'0' 4358
循环结束
*/

// c风格字符串 转为 int整数
int string_to_int(const char *str) {
        int result = 0;
        while (*str != '\0') {
            result = result * 10 + (*str++ - '0');
        }
        return result;
    }

int main(){
    const char *str = "4358";
    int result = string_to_int(str);
    std::cout << "The integer value is: " << result << std::endl;
    return 0;
}