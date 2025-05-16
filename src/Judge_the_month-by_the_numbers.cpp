#include <iostream>
#include <string>
using namespace std;

// 在界面上输入数字的月份（1 - 12），输出对应月份的英文单词的全称，如果输入的数字不合法，给出提示。
// 其它要求：
// 1）用 if … else if …实现；
// 2）用 switch 实现；
// 3）用字符串数组（C 风格和 C++风格）实现。


int main() {

	int month;
	cout << "输入月份（1 - 12）：";
	cin >> month;
	if (month < 1 || month >12)
	{
		cout << "输入的月份不合法！"<<endl;
		return 0;
	}
	//定义一个C++风格的字符串数组，数组元素为对应月份的英文单词的全称
	// string month_names[12] = { "january","februray","march","april","may","june","july","august","september","october","november","december" };
	
	// ❌定义一个C风格的字符串数组，数组元素为对应月份的英文单词的全称
	//const char month_names_c[12] = { "january","februray","march","april","may","june","july","august","september","october","november","december" };
	//! 错误：const char [12] 只能存 12 个字符，但你给了 12 个字符串（如 "january" 占 8 字节），总字节数远超 12。
	
	const char* month_names_c[12] = {"january", "february", "march", "april", "may", "june",	"july", "august", "september", "october", "november", "december"	};
// 	//! 创建一个数组，存储 12 个指针，每个指针指向字符串字面量的首地址。
	switch (month) {
		case 1:
			cout << "输入的月份是"<< month_names_c[0]<<" "<<endl;
			break;
		case 2:
			cout << "输入的月份是"<< month_names_c[1]<<endl;
			break;
		case 3:
			cout << "输入的月份是"<< month_names_c[2]<<endl;
			break;
		case 4:
			cout << "输入的月份是"<< month_names_c[3]<<endl;
			break;
		case 5:
			cout << "输入的月份是"<< month_names_c[4]<<endl;
			break;
		case 6:
			cout << "输入的月份是"<< month_names_c[5]<<endl;
			break;
		case 7:
			cout << "输入的月份是"<< month_names_c[6]<<endl;
			break;
		case 8:
			cout << "输入的月份是"<< month_names_c[7]<<endl;
			break;
		case 9:
			cout << "输入的月份是"<< month_names_c[8]<<endl;
			break;
		case 10:
			cout << "输入的月份是"<< month_names_c[9]<<endl;
			break;
		case 11:
			cout << "输入的月份是"<< month_names_c[10]<<endl;
			break;
		case 12:
			cout << "输入的月份是"<< month_names_c[11]<<endl;
			break;
		default:
			cout << "输入的月份不合法！"<<endl;
			break;	
	}
}

