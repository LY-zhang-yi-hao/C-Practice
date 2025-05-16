#include <iostream>
#include <windows.h>
#include <io.h>
#include <fcntl.h>

using namespace std;

void SetUTF8Console(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    // 为了让 wcout 能正确输出 UTF-8
    _setmode(_fileno(stdout), _O_U16TEXT);// 设置控制台输出为UTF-8
}   

//有两个任务： 
//1）超女有 3 个小组，每组有 4 名选手，请提供一个界面，输入每个超女的体重，然后，计算出每组的超女的平均体重和全部超女的平均体重。 

//2）从界面上输出三个超女的姓名，存放在 C 风格的字符串数组中，然后，分别向她们表白。


void zs(int a,char name){ cout << "🥰" << name << endl; }
void ls(int a,char name){ cout << "🥰🥰" << name << endl; }
void ww(int a,char name){ cout << "🥰🥰🥰" << name << endl; }

void biaobai(void *love(int),char *name){
    
    cout << "before love" << endl;
    love(100);
    cout << "after love" << endl;
}



int main(){
    SetUTF8Console();
    // 注意：setlocale 对 wcout 可能效果不佳，SetUTF8Console 中的 _setmode 更关键
    // setlocale(LC_ALL,"zh_CN.UTF-8"); 

    //1）超女有 3 个小组，每组有 4 名选手，请提供一个界面，输入每个超女的体重，然后，计算出每组的超女的平均体重和全部超女的平均体重。 
    int arr[3][4] = {0};
    int sum[3] = {0};

    for(int i = 0; i<3; i++){
        for (int j = 0; j<4; j++){
            // 使用 wcout 输出宽字符串
            wcout << L"please input the weight of the" << i+1 << L"group,the" << j+1 << L"girl:" << flush;
            cin >> arr[i][j]; // 输入保持不变，因为是数字
            sum[i] += arr[i][j];//计算每个小组的超女体重总和
        }
        // 这里也需要修改为 wcout
        wcout << L"the average weight of the" << i+1 << L"group is:" << sum[i]/4 << endl;
    }
    // 这里也需要修改为 wcout
    wcout << L"the average weight of all the girls is:" << (sum[0]+sum[1]+sum[2])/12 << endl;


    //2）从界面上输出三个超女的姓名，存放在 C 风格的字符串数组中，然后，分别向她们表白。
    char name[3] = {0};// 这样只能存储3个字符
    char name1[3][20] = {0};// 这样能存储3个字符串，每个字符串最多20个字符
    int count = 0;

    for(int i = 0; i<3; i++){
        cout << "please input the name of the" << i+1 << "girl:";
        cin >> name1[i];
        cout << "please input the way of love of the" << i+1 << "girl:";
        cin >> count;
    }

    // 表白方式采用 🥰函数指针，可以在普通表白函数中添加自定义的表白方式；

   void (*p)(int ,char); // 定义一个函数指针p，指向一个返回值为void，参数为int和char*的函数
   p = zs; // 将zs函数的地址赋值给p
   p(count,*name1[1]);// 调用zs函数，传入count和name1[1]


}






