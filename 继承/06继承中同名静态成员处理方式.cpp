#include<iostream>
using namespace std;

//继承中同名静态成员处理方式
//加作用域即可
class Base06
{
public:
	static int A;

	static void func()
	{
		cout << "This is Base06" << endl;
	}
};

int Base06::A = 100;

class Son06 :public Base06
{
public:
	static int A;

	static void func()
	{
		cout << "This is Son06" << endl;
	}
};

int Son06::A = 10;

void test06()
{
	//通过类名访问静态属性
	cout << Son06::A << endl;
	cout << Son06::Base06::A << endl;
	cout << Base06::A << endl;
	//通过类名访问静态函数
	Son06::func();
	Son06::Base06::func();
	Base06::func();
}

int main6()
{
	test06();

	system("pause");
	return 0;
}