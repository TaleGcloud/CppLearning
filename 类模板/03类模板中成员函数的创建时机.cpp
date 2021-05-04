#include<iostream>
using namespace std;

//类模板中成员函数创建时机
//普通类中的成员函数一开始就可以创建
class Person1
{
public:
	void showPerson1()
	{
		cout << "Person1 shown" << endl;
	}
};

//类模板中的成员函数在调用时才创建
class Person2
{
public:
	void showPerson2()
	{
		cout << "Person2 shown" << endl;
	}
};

template<class T>
class MyClass
{
public:

	T obj;

	void fun1()
	{
		obj.showPerson1();
	}

	void fun2()
	{
		obj.showPerson2();
	}
};

void test03()
{
	MyClass<Person1>m;
	m.fun1();
}

int main3()
{
	test03();

	system("pause");
	return 0;
}