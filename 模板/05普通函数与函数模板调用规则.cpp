#include<iostream>
using namespace std;

//普通函数与函数模板调用规则
//1、如果函数模板和普通函数都可以实现，优先调用普通函数
//2、可以通过空模板参数列表来强制调用函数模板
//3、函数模板也可以发生重载
//4、如果函数模板可以产生更好的匹配，优先调用函数模板

void myPrint(int a, int b)
{
	cout << "调用普通函数" << endl;
}

template<class T>
void myPrint(T a, T b)
{
	cout << "调用函数模板" << endl;
}

template<class T>
void myPrint(T a, T b, T c)
{
	cout << "调用函数模板重载" << endl;
}

void test05()
{
	myPrint(1, 2);

	//空模板参数列表，强制调用函数模板
	myPrint<>(3, 4);
}

int main5()
{
	test05();

	system("pause");
	return 0;
}