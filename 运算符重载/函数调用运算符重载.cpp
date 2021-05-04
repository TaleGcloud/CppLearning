#include<iostream>
using namespace std;

//函数调用运算符重载（仿函数）
//重载()

//打印输出类
class MyPrint
{
public:

	//重载函数调用运算符
	void operator()(string test)
	{
		cout << test << endl;
	}
};

void print2(string test)
{
	cout << test << endl;
}

void test06()
{
	MyPrint print;
	print("hello world");	//仿函数，类似函数的调用
	print2("hello world");

	//匿名函数对象
	MyPrint()("s");
}

int main()
{
	test06();

	system("pause");
	return 0;
}