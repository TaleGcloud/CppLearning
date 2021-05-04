#include<iostream>
using namespace std;

//静态成员
class Person
{
public:
	//静态成员变量（不属于某个对象，所有对象共享）
	static int A;
	//所有对象共享同一份数据
	//在编译阶段分配内存
	//类内声明，类外初始化

	//静态成员函数
	static void func()
	{
		cout << "静态成员函数的调用" << endl;
	}
	//所有对象共享同一个函数
	static void func1()
	{
		//静态成员函数只能访问静态成员变量
		A = 100;
	}
};

//类外初始化
int Person::A = 10;

void test1()
{
	Person p;
	cout << p.A << endl;
}

void test2()
{
	//静态成员变量（不属于某个对象，所有对象共享）
	//所以有两种访问方式

	//1、通过对象进行访问
	Person p1;
	cout << p1.A << endl;

	//2、通过类名进行访问
	cout << Person::A << endl;
}

int main()
{
	test2();

	system("pause");
	return 0;
}