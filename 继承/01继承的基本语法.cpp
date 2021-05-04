#include<iostream>
using namespace std;

//继承实现
//语法：class 子类：继承方式 父类
//子类也称为派生类
//父类也称为基类

//公共页面
class BasePage
{
public:
	void header()
	{
		cout << "头部页面" << endl;
	}

	void left()
	{
		cout << "左侧页面" << endl;
	}

	void footer()
	{
		cout << "底部页面" << endl;
	}
};

//Java页面
class Java :public BasePage
{
public:
	void content()
	{
		cout << "Java页面" << endl;
	}
};

//Python页面
class Python :public BasePage
{
public:
	void content()
	{
		cout << "Python页面" << endl;
	}
};

//C++页面
class Cpp :public BasePage
{
public:
	void content()
	{
		cout << "Cpp页面" << endl;
	}
};

void test01()
{
	Java java;
	java.header();
	java.left();
	java.content();
	java.footer();
}

int main1()
{
	test01();

	system("pause");
	return 0;
}