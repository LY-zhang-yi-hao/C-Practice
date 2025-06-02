#include <iostream>
#include <cstring>

// 功 能 : 将参数 src 字符串拷贝至参数 dest 所指的地址。
// 返回值 : 返回参数 dest 的字符串起始地址。
// 复制完字符串后，会在 dest 后追加 0。
// 如果参数 dest 所指的内存空间不够大，会导致数组的越界。

/*
例子场景 📝
假设我们有：

源字符串："Hello"
目标数组：一个能容纳 10 个字符的数组
执行过程 🔄
当调用 strcpy 函数时，它会：
从源字符串的第一个字符 'H' 开始
一个一个地复制字符到目标数组
依次复制 'H', 'e', 'l', 'l', 'o'
最后复制字符串结束符 '\0'
复制完成后，目标数组内容变为：
'H', 'e', 'l', 'l', 'o', '\0', [未使用], [未使用], [未使用], [未使用]
函数返回目标数组的起始地址
*/

char* my_strcpy(char* dest, const char* src){
// 传入的dest是数组的起始地址，src是字符串的起始地址
    char* start = dest; // 保存起始地址
    while(*src != '\0'){
        *dest = *src; // 对其解引用，将src最开始的字符赋值给dest最开始的字符
        dest++; // dest指针向后移动一位
        src++;
    }
    *dest = '\0'; // 在dest末尾添加结束符
    return start; // 返回起始地址
}


/*
功能：把 src 前 n 个字符的内容复制到 dest 中。
返回值：dest 字符串起始地址。
如果 src 字符串长度小于 n，则拷贝完字符串后，在 dest 后追加 0，直到 n 个。
如果 src 的长度大于等于 n，就截取 src 的前 n 个字符，不会在 dest 后追加 0。
如果参数 dest 所指的内存空间不够大，会导致数组的越界。
*/

int main(){
    const char* src = "Hello";
    char* dest = new char[100]; // 定义一个能容纳100个字符的数组
    
    my_strcpy(dest,src);//调用my_strcpy函数
    std::cout << "The string is: " << dest << std::endl;
    delete[] dest;

}