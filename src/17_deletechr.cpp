//删除字符串右边指定的字符
#include <iostream>
#include <cstring>
using namespace std;

//! 出现几个问题：
/*
    memset 必须要使用，用来初始化字符串，否则会出现乱码。
           找了好久的错误，最后发现str2没有初始化，导致输出乱码。

*/




// 最左侧的字符删除函数
void mydeletechr_left(char str[], char ch)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            for(int j = i; str[j] != '\0'; j++)
            {
                str[j] = str[j+1]; // 将后面的字符前移一位
            }
            return; 
        }
    }
}

void mydeletechr_right(char str[],char ch)
{
    int p = -1; // 用于记录字符 ch 的位置
    int i = 0; // 记录字符串长度

    for ( i ; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            p = i; // 记录字符 ch 的位置
        }
    }
    if(p != -1) // 如果找到字符 ch
    {
        for(int j = p; str[j] != '\0'; j++)
        {
            str[j] = str[j+1];
        }
    }
    else
        cout << "没有找到字符 " << ch << "，无法删除。" << endl; // 如果没有找到字符 ch，输出提示信息
    return;
}

int main()
{
    char str[100] = {'H','e','l','l','o','W','o','r','l','d','\0'};
    char str1[100];
    char str2[100]; // 用于存储删除后的字符串


    memset(str1, 0, sizeof(str1)); // 初始化字符串
    memset(str2, 0, sizeof(str2)); // 初始化字符串

    char ch = 'o'; // 要删除的字符

    memcpy(str1,str,strlen(str)); 
    memcpy(str2,str,strlen(str)); 

    mydeletechr_left(str1, ch); // 调用删除函数
    cout << "删除最左侧后的字符串: " << str1 << endl; // 输出删除后的字符串

    mydeletechr_right(str2,ch);
    cout << "删除最右侧后的字符串: " << str2 << endl; // 输出删除后的字符串
    return 0;
}