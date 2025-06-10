/*
有两个任务： 
1）用一个 while 循环，接受从键盘输入的整数，如果输入的整数不在 1 到 100 之间（包括 1 和100），认为无效，丢弃；
如果输入的整数在 1 到 100 之间，则把每次输入的值累加起来；如果输入的整数为 0，跳出循环。最后，显示有效数据的个数和总和。 
2）输出 1 到 100 之间（包括 1 和 100）的能整除 5 的数字。
*/
#include <iostream>
#include <cstring>
#include <string>
using namespace std;



// 任务1：个数和总和，循环 判断条件：1~100之间， 累加；


int main(){
    int num;
    int count = 0;
    int sum = 0;

    while(true){

        cout << "请输入一个整数：";
        cin >> num;

        if(num == 0) break; // 这个break是跳出while循环,因为 if 是判断语句，而不是循环；

        if(num >= 1 && num <= 100){
            count++;
            sum += num;
        }
        else{
            cout << "输入的整数不在1到100之间，请重新输入。" << endl;
        }
    }

    cout << "有效数据的个数为：" << count << endl;
    cout << "有效数据的和为：" << sum << endl;    
        
}