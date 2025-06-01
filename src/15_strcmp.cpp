#include <iostream>
#include <cstring>

using namespace std;



// 功能：比较 str1 和 str2 的大小。 
// 返回值：相等返回 0，str1 大于 str2 返回 1，str1 小于 str2 返回 - 1；

// 两个字符串比较的方法是比较字符的 ASCII 码的大小 
// 从两个字符串的第一个字符开始，如果分不出大小 
// 就比较第二个字符，如果全部的字符都分不出大小，就返回 0，表示两个字符串相等。

int mystrcmp(const char* str1,const char* str2)
{
    int i = 0;
    while (true)
    {
        if(str1[i] > str2[i]) return 1;
        if(str1[i] < str2[i]) return -1;
        if(str1[i] == str2[i]) return 0;
        i++;
    }
    
}
// 功能：比较 str1 和 str2 前 n 个字符的大小。 
// 返回值：相等返回 0，str1 大于 str2 返回 1，str1 小于 str2 返回 - 1；
int mystrcnmp(const char* str1,const char* str2,int n)
{
    
    for (int i = 0; i < n; i++)
    {
        if(str1[i] > str2[i]) return 1;
        if(str1[i] < str2[i]) return -1;
        if(str1[i] == str2[i]) return 0;
    }
    
    
}


int main()
{
    char* str1 = "abcde";
    char* str2 = "abcdef";

    int p = mystrcmp(str1, str2);
    if(p==1)    {cout << str1 << ">" << str2;}
    else if(p==-1) {cout << str1 << "<" << str2;}
    else {cout << str1 << "=" << str2;}

    cout << endl;

    int p2 = mystrcnmp(str1, str2, 3);
    if(p2==1)    {cout << str1 << ">" << str2;}
    else if(p2==-1) {cout << str1 << "<" << str2;}
    else {cout << str1 << "=" << str2;}

}






