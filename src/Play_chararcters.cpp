#include <iostream>
using namespace std;

/* 要求：
有三个任务： 

1）从界面上输入一个字母，显示该字母后面的字母，如果后面没有字母，给出提示。不允许用 if… else if…和 switch 语句。a b A B 
2）自定义一个函数，把字符的'0'、'1'、'2'、'3'、'4'、'5'、'6'、'7'、'8'、'9'转换为整数的 0、1、
2、3、4、5、6、7、8、9。不允许用 if…else if…和 switch 语句。
3）实现字符操作常用库函数的功能，如下：
int isalpha(int ch);    // 若 ch 是字母（'A'-'Z','a'-'z'）返回非 0，否则返回 0。 
int isalnum(int ch);  // 若 ch 是字母（'A'-'Z','a'-'z'）或数字（'0'-'9'），返回非 0，否则返回 0。 
int isdigit(int ch);     // 若 ch 是数字（'0'-'9'）返回非 0，否则返回 0。 
int islower(int ch);    // 若 ch 是小写字母（'a'-'z'）返回非 0，否则返回 0。 
int isupper(int ch);    // 若 ch 是大写字母（'A'-'Z'）返回非 0，否则返回 0。 
int tolower(int ch);    // 若 ch 是大写字母（'A'-'Z'），则返回它的小写字母（'a'-'z'）。 
int toupper(int ch);    // 若 ch 是小写字母（'a'-'z'），则返回它的大写字母（'A'-'Z'）。
*/



//? 任务1
// int main(){
//     SetUTF8Console();  // 设置控制台为UTF-8编码
    
//     // 定义一个使用字符的数组
//     const char characters[] = "abAB";
//     char input;
//     cout << "请输入一个字母：";
//     cin >> input;

//     // 使用数组进行匹配
//     for (int i = 0; i < sizeof(characters)-1; i++){
//         if (input == characters[i]){
//             cout << "输入的字母是：" << characters[i+1] << endl;
//             return 0;
//         }
//     }
//     cout << "输入的字母不在范围内" << endl;
//     return 0;
// }


//? 任务2）自定义一个函数，把字符的'0'、'1'、'2'、'3'、'4'、'5'、'6'、'7'、'8'、'9'转换为整数的 0、1、 2、3、4、5、6、7、8、9。不允许用 if…else if…和 switch 语句。
// 字符串 转成 int; 利用ascii码

// 定义一个函数
// int char_to_int(char ch){
//     // 通过 ASCII 码转换
//     // 转换的原理： 字符 '0' 的 ASCII 码是 48，'1' 的 ASCII 码是 49，以此类推，'9' 的 ASCII 码是 57。
//     // 因此，'0' - '0' = 0，'1' - '0' = 1，'2' - '0' = 2，'3' - '0' = 3，'4' - '0' = 4，'5' - '0' = 5，'6' - '0' = 6，'7' - '0' = 7，'8' - '0' = 8，'9' - '0' = 9。
//     return ch - '0';
// }

// int main(){
//     SetUTF8Console();  // 设置控制台为UTF-8编码

//     //todo C风格字符串
//     // 注意C风格字符串 最后一位有\0，所以对于求 长度来循环是，必须减一
//     // char ch[]="0123456789";         
    
//     // for (int i = 0; i < (sizeof(ch)/sizeof(ch[0]) - 1); i++){
//     //     cout << char_to_int(ch[i]) << endl;
//     // }  

//     //todo C++ 风格字符串
//     string str="123456789";
//     for (int i = 0; i < str.length(); i++){
//         cout << char_to_int(str[i]) << endl;
//     }
    
// }

//? 任务3
// 3）实现字符操作常用库函数的功能，如下：
// int isalpha(int ch);    // 若 ch 是字母（'A'-'Z','a'-'z'）返回非 0，否则返回 0。 
// int isalnum(int ch);  // 若 ch 是字母（'A'-'Z','a'-'z'）或数字（'0'-'9'），返回非 0，否则返回 0。 
// int isdigit(int ch);     // 若 ch 是数字（'0'-'9'）返回非 0，否则返回 0。 
// int islower(int ch);    // 若 ch 是小写字母（'a'-'z'）返回非 0，否则返回 0。 
// int isupper(int ch);    // 若 ch 是大写字母（'A'-'Z'）返回非 0，否则返回 0。 
// int tolower(int ch);    // 若 ch 是大写字母（'A'-'Z'），则返回它的小写字母（'a'-'z'）。 
// int toupper(int ch);    // 若 ch 是小写字母（'a'-'z'），则返回它的大写字母（'A'-'Z'）。


// 实现 int isalpha(int ch);     若 ch 是字母（'A'-'Z','a'-'z'）返回非 0，否则返回 0。 
// 利用ascii码
    int my_isalpha(int ch){
        if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z' ) 
            return 1;
        else 
            return 0;
    }

// 实现 int isalnum(int ch);     若 ch 是字母（'A'-'Z','a'-'z'）或数字（'0'-'9'），返回非 0，否则返回 0。 
    int my_isalnum(int ch){
        if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9')
            return 1;
        else 
            return 0;
    }

// 实现 int isdigit(int ch);     若 ch 是数字（'0'-'9'）返回非 0，否则返回 0。 
    int my_isdigit(int ch){
        if (ch >= '0' && ch <= '9')
            return 1;
        else 
            return 0;
    }

    int main(){

        char ch;
        cout << "请输入一个字符：";
        cin >> ch;
        cout << my_isalpha(ch) << endl;
        cout << my_isalnum(ch) << endl;
        cout << my_isdigit(ch) << endl;

    }
 