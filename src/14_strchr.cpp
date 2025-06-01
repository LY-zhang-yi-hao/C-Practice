#include <iostream>
#include <cstring>

using namespace std;

// 返回在字符串 s 中第一次出现 c 的位置，如果找不到，返回 0。 
// babcddefae    

// int mystrchr(const char* s, char c )
// {
//     for(int i = 0; i < strlen(s); i++)
//     {
//         if(s[i] == c)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     char s[] = "babcddefae";
//     char find = 'c';
//     int index = mystrchr(s, find);
//     cout << index << endl;
//     return 0;
// }

int mystrchr(const char* s, char c)
{
    int i = 0;
    while(*s != '\0')
    {
        if(*s == c)
        {
            return i;
        }
        s++; // 移动指针
        i++; // 递增索引
    }
    return 0; // 如果找不到，返回0
}

//  返回在字符串 s 中最后一次出现 c 的位置，如果找不到，返回 0
// 注意：不要从字符串的最后一个字符往前找，因为用 strlen()获取字符串长度时，需要遍历一次字符串，效率更低。
// 从字符串的最后一个字符往前找，需要遍历字符串，效率更低。
int mystrnchr(const char* s, char c)
{
    int i = 0;
    //  返回在字符串 s 中最后一次出现 c 的位置，如果找不到，返回 0
    int last_pos = 0;

    while(s[i] != '\0')
    {
        if(s[i] == c)
        {
            last_pos = i;
        }
        i++;
    }
    return last_pos;
}

int main()
{
    const char* s = "babcddefac";// 字符串常量
    char find = 'c';
    int index = mystrchr(s, find);
    int index2 = mystrnchr(s, find);
    cout << index << endl;
    cout << index2 << endl;
}
