#include<iostream>
#include<string>
#include<cstring>
#include<windows.h>

using namespace std;

void SetUTF8Console(){
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
}


// 从界面上输入一个字符串（C 风格），计算字符串的长度。如果输入的是"abcde"，显示的结果是5。 
// 其它要求： 
// 1）把计算字符串长度的功能封装成一个函数。 
// 2）采用 for 循环，用数组表示法和临时变量计数。 
// 3）采用 while 循环，用指针表示法和临时变量计数。 
// 4）不用临时变量计数，用递归实现（奇巧淫技）。


// todo 2）采用 for 循环，用数组表示法和临时变量计数。

int my_strlen(char *ch) // char *ch 表示ch是一个指向字符串的指针
{
    int count = 0;
    for(int i = 0; ch[i] != '\0'; i++) // 数组的本质：a[下标] = * (a + 下标) ，所以不需要解引用，直接使用数组表示法
    {
        count++;
    }
    
    return count;
}


int main(){
    SetUTF8Console();    
    setlocale(LC_ALL, "zh_CN.UTF-8"); // 设置本地化，确保可以显示中文

    char ch[100]; // 字符串数组，非指针
    memset(ch,0,sizeof(ch)); // 初始化数组
    cout << "请输入一个字符串："; cin >> ch;
    cout << "字符串的长度为：" << my_strlen(ch) << endl; //这里传递的是ch[0]的地址，所以需要用char *ch来接收
    // 等价为 cout << my_strlen(&ch[0]) << endl;

    //! 对于数组作为函数参数传入：
    /* 字符数组/字符串，习惯显式使用char* ; 对于其他类型数组，习惯使用type[]的形式 
    例如，我这里的代码，使用的字符串数组，习惯使用char*接收 
         如果使用int数组，习惯使用int[]的形式来接收
    */

}



// Todo 3）采用 while 循环，用指针表示法和临时变量计数。   

// int my_strlen(const char* str){
//     // 函数传入的参数是字符串的地址（main函数中定义的str指针），所以需要用const char* str来接收
//     int count = 0;
//     while(*str != '\0'){ 
//         count++;
//         str++;
//     }
//     return count;
// }

// int main(){
//     SetUTF8Console();
//     setlocale(LC_ALL,"zh_CN.UTF-8");

//     //! 定义字符串用 "" ，定义字符用 ''
//     const char* str = "abcde"; 

//     cout << my_strlen(str) << endl;
// }

// todo 4）不用临时变量计数，用递归实现（奇巧淫技）。
    
// int my_strlen(const char* str){
//     if(*str == '\0'){
//         return 0;
//     }
//     return 1 + my_strlen(str + 1);
// }

// int main(){
//     SetUTF8Console();
//     setlocale(LC_ALL,"zh_CN.UTF-8");
//     const char* str = "abcde";

//     cout << my_strlen(str) << endl;

// }


