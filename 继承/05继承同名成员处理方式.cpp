#include<iostream>
using namespace std;

//继承同名成员处理方式
class Base05
{
public:
	Base05()
	{
		A = 100;
	}

	int A;

	void func()
	{
		cout << "This is Base05" << endl;
	}
};

class Son05 :public Base05
{
public:
	Son05()
	{
		A = 10;
	}

	int A;

	void func()
	{
		cout << "This is sonBase" << endl;
	}
};

void test05()
{
	Son05 son;
	//同名成员属性
	cout << "Son中的A:" << son.A << endl;
	cout << "Base05中的A:" << son.Base05::A << endl;
	//同名成员函数
	son.func();
	son.Base05::func();
	//只要子类和父类同名，要用父类就要加作用域
}

int main5()
{
	test05();

	system("pause");
	return 0;
}