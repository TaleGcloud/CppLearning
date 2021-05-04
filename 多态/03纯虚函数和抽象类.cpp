#include<iostream>
using namespace std;

//纯虚函数和抽象类
class Base
{
public:
	//纯虚函数
	//此类只要有一个纯虚函数，此类称为抽象类
	//抽象类：
	//1、无法实例化对象
	//2、抽象类的子类，必须要重写父类中的纯虚函数，否则也是抽象类
	virtual void func() = 0;
};

class Son :public Base
{
public:
	virtual void func()
	{
		cout << "func函数调用" << endl;
	}
};

void test03()
{
	Base* base = new Son;
	base->func();
}

int main3()
{
	test03();

	system("pause");
	return 0;
}