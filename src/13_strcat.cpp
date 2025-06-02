#include <iostream>
#include <cstring>

#define _CRT_SECURE_NO_WARNINGS  // 使用 C 风格字符串操作的函数需要定义这个宏

using namespace std;


// 功能：将 src 字符串拼接到 dest 所指的字符串尾部。 
// 返回值：返回 dest 字符串起始地址。 
// dest 最后原有的结尾字符 0 会被覆盖掉，并在连接后的字符串的尾部再增加一个 0。 
// 如果参数 dest 所指的内存空间不够大，会导致数组的越界。

// 使用 memcpy 实现 strcat
char* mystrcat(char* dest, const char* src) 
{ 
 // abc0       // xyz0 
 memcpy(dest + strlen(dest), src, strlen(src)+1);  // 将 src 字符串拼接到 dest 字符串的末尾
  
 return dest; 
}

// 功能：将 src 字符串的前 n 个字符拼接到 dest 所指的字符串尾部。 
// 返回值：返回 dest 字符串的起始地址。 
// 如果 n 大于等于字符串 src 的长度，那么将 src 全部追加到 dest 的尾部。 
// 如果 n 小于字符串 src 的长度，只追加 src 的前 n 个字符。 
// strncat 会将 dest 字符串最后的 0 覆盖掉，字符追加完成后，再追加 0。 
// 如果参数 dest 所指的内存空间不够大，会导致数组的越界

char* mystrncat(char* dest,const char* src,int n)
{
    int p = strlen(dest);
    if(n < strlen(src))
    {
        
        memcpy(dest+p,src,n); // 第一个 准备复制到dest字符串数组的具体位置
        *(dest+n+p) = '\0';
        return dest;
    }


    if(n > strlen(src))
    {
        memcpy(dest+p, src, strlen(src)+1); 
        return dest;
    }
}



int main()
{
    char src[100] = "World";
    char dest[100] = "Hello";
    // mystrcat(dest, src);
    //mystrncat(dest, src, 3);
    mystrncat(dest, src, 10);
    cout << dest << endl; 
    return 0;
}