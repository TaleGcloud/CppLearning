#include<iostream>
using namespace std;

//函数对象（仿函数）

class myAdd
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};

class myPrint
{
public:
	myPrint()
	{
		this->count = 0;
	}

	void operator()(string test)
	{
		cout << test << endl;
		this->count++;
	}

	//记录调用次数
	int count;
};

void doPrint(myPrint& m, string s)
{
	m(s);
}

void test01()
{
	//1、函数对象在使用的时候，可以像普通函数一样，可以有参数和返回值
	myAdd myadd;
	cout << myadd(10, 20) << endl;

	//2、函数对象超出了普通函数的概念，函数对象可以有自己的状态
	myPrint myprint;
	myprint("函数对象");
	myprint("函数对象");
	cout << "myprint调用次数为：" << myprint.count << endl;

	//3、函数对象可以作为参数传递
	myPrint myprint2;
	doPrint(myprint2, "hello");
}

int main1()
{
	test01();

	return 0;
}