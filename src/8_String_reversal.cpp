#include <iostream>
#include <string>
#include <cstring>
#include <fcntl.h>
#include <wchar.h>

using namespace std;



// 从界面上输入一个 C 风格的字符串，如果输入的是"abc"，反转后"cba"。 
// 要求： 
// 1）反转的结果存放在另一字符串中。 
// 2）原地反转，不借助其它的字符串。


// 1）反转的结果存放在另一字符串中。 

char* reverse_string(char* str1, char* str2){
    for(int i = 0; i < strlen(str1);i++){
       str2[i] = str1[strlen(str1)-i-1];  
         
    }
    str2[strlen(str1)] = '\0';
    return str2;
}

// 2）原地反转，不借助其它的字符串。
// ! 不能使用 strlen(str1)+1 来开辟空间，会造成数组越界。
char* reverse_strin_1(char* str1){
    int len = strlen(str1);
    for(int i =0; i < len/2;i++){
       char temp = str1[i];
       str1[i] = str1[len-i-1];
       str1[len-i-1] = temp;
    }
    return str1;//返回的是str1的地址
}



//? 调试时，别忘了 cin >> str1; 控制台输入字符串后，才能继续执行。

int main(){

    char* str1 = new char[100];
    memset(str1,0,100);
    char* str2 = new char[100];
    memset(str2,0,100);

    cout << "please input a string:";
    //cin >> str1;
    str1[0] = 'a';
    str1[1] = 'b';
    str1[2] = 'c';
    str1[3] = '\0';
    reverse_string(str1,str2);
    cout << "before reverse,the string is:" << str1 << endl;
    cout << "after reverse,the string is:" << str2 << endl;
    

    reverse_strin_1(str1);
    cout << "after reverse,the string is:" << str1 << endl;

    
    delete[] str1;
    delete[] str2;
    return 0;
}