#include<iostream>
using namespace std;

//函数模板注意事项
template<typename T>	//typename可以替换成class
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
//1、自动类型推导，必须推导出一致的数据类型T，才可以使用
void test02()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	mySwap(a, b);
	//mySwap(a, c);	推导不一致的T类型
	cout << a << endl << b << endl;
}

//2、模板必须要确定出T的数据类型，才可以使用
template<class T>
void func()
{
	cout << "func调用" << endl;
}

int main2()
{
	test02();
	func<int>();	//指定T数据类型

	system("pause");
	return 0;
}