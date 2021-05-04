#include<iostream>
using namespace std;

//继承中构造和析构
class Base
{
public:
	Base()
	{
		cout << "Base构造函数" << endl;
	}

	~Base()
	{
		cout << "Base析构函数" << endl;
	}
};

class Son :public Base
{
public:
	Son()
	{
		cout << "Son构造函数" << endl;
	}

	~Son()
	{
		cout << "Son析构函数" << endl;
	}
};

void test04()
{
	//构造顺序与析构顺序相反
	Son son;
}

int main4()
{
	test04();

	system("pause");
	return 0;
}