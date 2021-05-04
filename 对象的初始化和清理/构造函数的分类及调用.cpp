#include<iostream>
using namespace std;

//构造函数的分类及调用
//分类
class Person
{
private:
	int age;

public:

	//构造函数
	Person()
	{
		age = 0;
		cout << "Person构造函数调用" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "Person有参构造函数" << endl;
	}

	//拷贝构造函数
	Person(const Person& p)
	{
		age = p.age;
	}

	//析构函数
	~Person()
	{
		cout << "Person析构函数调用" << endl;
	}
};

//调用
void test01()
{
	//括号法
	Person p1;
	Person p2(10);
	Person p3(p2);

	//显示法
	Person p4 = Person(10);
	Person p5 = Person(p4);
	
	//Person(10);	//匿名对象：当前行执行结束后，系统立即回收匿名对象

	//隐式转换法
	Person p6 = 10;
	Person p7 = p6;
}

int main2()
{
	test01();

	system("pause");
	return 0;
}