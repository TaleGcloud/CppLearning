#include<iostream>
using namespace std;

//��ģ���г�Ա��������ʱ��
//��ͨ���еĳ�Ա����һ��ʼ�Ϳ��Դ���
class Person1
{
public:
	void showPerson1()
	{
		cout << "Person1 shown" << endl;
	}
};

//��ģ���еĳ�Ա�����ڵ���ʱ�Ŵ���
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