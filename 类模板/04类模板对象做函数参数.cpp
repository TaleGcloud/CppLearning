#include<iostream>
using namespace std;

//类模板对象做函数参数

template<class T1,class T2>
class Person
{
public:

	Person(T1 name, T2 age)
	{
		this->name = name;
		this->age = age;
	}

	void showPerson()
	{
		cout << name << "\t" << age << endl;
	}

	T1 name;
	T2 age;
};

void printPerson1(Person<string, int>& p)
{
	p.showPerson();
}

template<class T1,class T2>
void printPerson2(Person<T1, T2>& p)
{
	p.showPerson();
	cout << "T1的类型为" << typeid(T1).name() << endl;
	cout << "T1的类型为" << typeid(T2).name() << endl;
}

template<class T>
void printPerson3(T& p)
{
	p.showPerson();
	cout << "T的类型为" << typeid(T).name() << endl;
}

void test04()
{
	//1、指定传入的类型——直接显示对象的数据类型
	Person<string, int>p1("sun", 100);
	printPerson1(p1);
	//2、参数模板化——将对象中的参数变为模板进行传递
	Person<string, int >p2("zhu", 90);
	printPerson2(p2);
	//3、整个类模板化——将这个对象类型模板化进行传递
	Person<string, int >p3("tang", 30);
	printPerson3(p3);
}

int main4()
{
	test04();

	system("pause");
	return 0;
}