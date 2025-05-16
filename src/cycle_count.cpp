#include <iostream>
using namespace std;

//! 解决控制台输出中文乱码问题
#include <windows.h>  // 引入Windows API
// 在main函数开始前设置控制台代码页为UTF-8
void setUTF8Console() {
    SetConsoleOutputCP(65001);  // 设置输出代码页为UTF-8
    SetConsoleCP(65001);        // 设置输入代码页为UTF-8
}
// SetConsoleOutputcp :Set Console Output Code Page 设置控制台输出代码页
// SetConsoleCP :Set Console Input Code Page 设置控制台输入代码页
// 65001 :UTF-8 代码页



/*
有两个任务： tn
1）采用一个 while 循环，把 1 到 100 之间的数值累加起来。 
2）采用一个 for 循环，把用户每次从键盘输入的数值累加起来，如果总和超过了 5000，循环结束。
*/

int main(){

    int i = 1;
    int sum = 0;
    while(i<=100){
        sum += i;
        i++;
    }
    cout << "1到100的累加和为：" << sum << endl;
    

    int num;
    int sum2 = 0;
    for(bool break_1 = false; break_1 == false; ){
        cout << "请输入一个数字：" << endl;
        cin >> num;
        sum2 += num;
        if(sum2 > 5000){
            break_1 = true;
        }
    }   
    
    cout << "总和为：" << sum2 << endl;
        
}
