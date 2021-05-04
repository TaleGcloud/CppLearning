#include<iostream>
using namespace std;

//函数重载(不能出现二义性)
//可以让函数名相同，提高复用性

//函数重载的注意事项：
//1、引用作为重载的条件
void func(int &a)
{
	cout << "func(int &a)" << endl;
}

void func(const int& a)//常量
{
	cout << "func(const int &a)" << endl;
}

//2、函数重载碰到默认参数
void func2(int a, int b)
{
	cout << a+b << endl;
}

void func2(int a)
{
	cout << a+10 << endl;
}

int main()
{
	system("pause");
	return 0;
}