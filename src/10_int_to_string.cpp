#include <iostream>
#include <string>
#include <cstring>

using namespace std;

// 从界面上输入一个整数，把它转换为十进制和二进制的 C 风格的字符串。
/*
    转为字符串：
    注意事项：
    1. 取余和取整的使用； 转为2进制，就使用2取余，取整，转为16进制，就使用16取余，取整
    2. ASCII的转换；0的ASCII码为48，1的ASCII码为49，2的ASCII码为50，以此类推。 也可以直接加'0'，不用加48

*/



int main(){
    int num;
    cout << "input a number:";
    cin >> num;

    //? 转为十进制 C 风格的字符串 ,需要注意 ASCII的转换；取余和取整的使用；
    int num_10 = num;
    char* chr_10 = new char[100]; // 定义一个字符串，长度为100
    memset(chr_10,0,sizeof(chr_10));

    int count = 0;// 计数器
    while(num_10){ // 当num不为0时，继续循环   
        chr_10[count++] = num_10%10 + '0'; // 将num的最后一位转换为字符，并存储到chr_10中
        //! 为什么要加'0'？
        // 因为num%10的结果是一个整数，需要转换为字符
        num_10 /= 10; // 将num除以10，去掉最后一位

        // 例如输入为432，则 while(432),chr_10[0] = 2,count = 1,num = 43
        // while(43),chr_10[1] = 3,count = 2,num = 4
        // while(4),chr_10[2] = 4,count = 3,num = 0
    }

    for(int i = count-1; i >= 0; i--){ // 从后往前遍历chr_10
        cout << chr_10[i]; // 输出chr_10
    }
    delete[] chr_10;

    //? 转为二进制 C 风格的字符串 ,需要注意 ASCII的转换；取余和取整的使用；
    int num_2 = num;
    char* chr_2 = new char[100];
    memset(chr_2,0,sizeof(chr_2));

    int count_2 = 0;

    while(num_2){
        chr_2[count_2++] = num_2 % 2 + '0';
        num_2 = num_2 / 2;
    }
    cout << '\n';
    for (int i = count_2-1;i>=0;i--){
        cout << chr_2[i];
    }
    delete[] chr_2;  

}
