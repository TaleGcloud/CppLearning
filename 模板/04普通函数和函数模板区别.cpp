#include<iostream>
using namespace std;

//普通函数和函数模板的区别

//1、普通函数调用可以发生隐式类型转换
//2、函数模板 用自动类型推导，不可以发生隐式类型转换
//3、函数模板 用显示指定类型，可以发生隐式类型转换

//普通函数
int add(int a, int b)
{
	return a + b;
}

//函数模板
template<class T>
T add2(T a, T b)
{
	return a + b;
}

void test04()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	cout << add(a, c) << endl;

	//自动类型推导
	cout << add2(a, b) << endl;

	//显示指定类型
	cout << add2<int>(a, c) << endl;
}

int main4()
{
	test04();

	system("pause");
	return 0;
}