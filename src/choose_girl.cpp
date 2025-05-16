#include <iostream>
#include <string>
using namespace std;

//定义结构体
struct st_girl {
   int age;
   int height;
   string sc;
   bool yz;
}stgirl[6];

int main() {
   //输入数据
   stgirl[0] = { 18,160,"A",true }; //18岁，160cm，A型，漂亮
   stgirl[1] = { 20,165,"B",false }; //20岁，165cm，B型，不漂亮
   stgirl[2] = { 19,160,"C",true }; //19岁，160cm，C型，漂亮  
   stgirl[3] = { 30,165,"D",false };//30岁，165cm，D型，不漂亮
   stgirl[4] = { 40,170,"D",true }; //40岁，170cm，D型，漂亮
   stgirl[5] = { 34,165,"F",false }; //34岁，165cm，F型，不漂亮

   //用逻辑表达式组合判断条件，不要用嵌套 if 语句。
   //选出妃子；1）年龄 18-25 岁；2）身高 165-178cm；3）身材火辣；4）颜值漂亮。
   //宫女：1）年龄 18-30 岁；2）身高 160-165cm；3）身材火辣或者普通；4）颜值漂亮。
   //嬷嬷：1）年龄 35-40 岁；2）身高 155-165cm；3）身材普通或者飞机场；4）颜值一般。

   // 该代码片段用于遍历stgirl数组，并根据每个元素的年龄、身高、体型和颜值条件，输出相应的角色描述。
for (int i = 0; i < 6; i++) {
       if (stgirl[i].age >= 35 && stgirl[i].age <= 40 && stgirl[i].height >= 155 && stgirl[i].height <= 165 && (stgirl[i].sc == "A" || stgirl[i].sc == "B" || stgirl[i].sc == "C") && stgirl[i].yz == false)
           cout << i << "号，" << "嬷嬷：" << stgirl[i].age << "岁，" << stgirl[i].height << "cm，" << stgirl[i].sc << "型，颜值一般。";
       if (stgirl[i].age >= 18 && stgirl[i].age <= 25 && stgirl[i].height >= 165 && stgirl[i].height <= 178 && (stgirl[i].sc == "D" || stgirl[i].sc == "F") && stgirl[i].yz == true)
           cout << i << "号，" << "妃子：" << stgirl[i].age << "岁，" << stgirl[i].height << "cm，" << stgirl[i].sc << "型，颜值漂亮。";
       if (stgirl[i].age >= 18 && stgirl[i].age <= 30 && stgirl[i].height >= 160 && stgirl[i].height <= 165 && (stgirl[i].sc == "A" || stgirl[i].sc == "B" || stgirl[i].sc == "C" || stgirl[i].sc == "D" || stgirl[i].sc == "F") && stgirl[i].yz == true)
           cout << i << "号，" << "宫女：" << stgirl[i].age << "岁，" << stgirl[i].height << "cm，" << stgirl[i].sc << "型，颜值漂亮。";

   }
}
