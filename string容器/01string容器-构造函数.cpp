#include<iostream>
using namespace std;

//string构造函数
//C++中string本质是一个类
void test01()
{
	//默认构造
	string s1;

	//c风格字构造
	const char* str = "hello world";
	string s2(str);

	//拷贝构造
	string s3(s2);

	//重复字符构造
	string s4(10, 'a');
}

int main1()
{
	test01();

	system("pause");
	return 0;
}