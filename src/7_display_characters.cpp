


// 界面上输入一个字符串（C 风格），把字符串中的每个字符显示出来，如果输入的是"abc"，要求： 
// 1）正序显示：a b c 
// 2）逆序显示：c b a 
// 求字符串的长度可以利用上一题的成果，也可以直接用 strlen()函数，关注性能的细节。

#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

void SetUTF8Console(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
}


int main(){
    SetUTF8Console();
    setlocale(LC_ALL,"zh_CN.UTF-8");

    char* str = new char[100]; // !动态分配内存.仓库🏬总共100格，你只放了 6 件东西，剩余 94 格是空的，但仓库总面积没变。
    memset(str,0,sizeof(str)); // 初始化
    cin >> str;

    cout << "正序\n";
    for(int i=0; i<strlen(str); i++){ 
       
        //!什么时候使用 strlen,sizeof?
        // strlen :计算字符串的长度（不包括 \0），需要 #include <cstring>。它会从指针开始遍历，直到遇到 \0。
        // sizeof :计算字符串占用的内存大小（包括 \0），需要 #include <cstring>。它会计算整个字符串占用的内存。
        
        cout << str[i] << " "; 
        //! 这个为什么变成数组了？
        // str 是一个指针，但 C++ 允许用数组下标语法访问它指向的连续内存，就像数组一样。
    }

    cout << "\n逆序\n";
    for(int i=(strlen(str)-1); i>=0 ;i--){
        cout << str[i] << " ";
    }

    delete[] str;
    
}
