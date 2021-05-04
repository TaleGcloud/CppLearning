#include<iostream>
using namespace std;

//左移运算符重载
class Person
{
	//全局函数做友元
	friend ostream& operator<<(ostream& cout, Person& p);

public:
	Person(int a, int b)
	{
		A = a;
		B = b;
	}

private:
	//void operator<<( cout )	
	//p.operator<<(cout) 简化为 p << cout 不是想要的
	//不会利用成员函数重载左移运算符
	int A = 0;
	int B = 0;
};

//只能利用全局函数重载左移运算符
//ostream：输出流，cout：输出流对象
ostream& operator<<(ostream& cout, Person& p)
{
	cout << "Person::A=" << p.A << "\t" << "Person::B=" << p.B;
	return cout;
}

void test02()
{
	Person p(10, 11);
	//operator<<(cout , p) 化简为 cout << p
	//本质是函数的调用
	cout << p << endl;	//链式编程
}

int main2()
{
	test02();

	system("pause");
	return 0;
}