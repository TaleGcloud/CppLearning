#include<iostream>
using namespace std;

//类模板与友元

template<class T1, class T2>
class Person;

//通过全局函数打印Person信息
//类外实现
template<class T1, class T2>
void PrintPerson2(Person<T1, T2> p)
{
	cout << p.m_Name << "\t" << p.m_Age << endl;
}

template<class T1,class T2>
class Person
{
	//全局函数 类内实现
	friend void PrintPerson(Person<T1, T2> p)
	{
		cout << p.m_Name << "\t" << p.m_Age << endl;
	}

	//全局函数 类外实现
	//加空模板的参数列表
	//如果全局函数是类外实现，需要让编译器提前知道模板存在
	friend void PrintPerson2<>(Person<T1, T2> p);

public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

private:
	T1 m_Name;
	T2 m_Age;
};

void test08()
{
	Person<string, int>p("Tom", 20);
	PrintPerson(p);
}

int main8()
{
	test08();

	system("pause");
	return 0;
}