#include<iostream>
using namespace std;

//��ģ���������������

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
	cout << "T1������Ϊ" << typeid(T1).name() << endl;
	cout << "T1������Ϊ" << typeid(T2).name() << endl;
}

template<class T>
void printPerson3(T& p)
{
	p.showPerson();
	cout << "T������Ϊ" << typeid(T).name() << endl;
}

void test04()
{
	//1��ָ����������͡���ֱ����ʾ�������������
	Person<string, int>p1("sun", 100);
	printPerson1(p1);
	//2������ģ�廯�����������еĲ�����Ϊģ����д���
	Person<string, int >p2("zhu", 90);
	printPerson2(p2);
	//3��������ģ�廯�����������������ģ�廯���д���
	Person<string, int >p3("tang", 30);
	printPerson3(p3);
}

int main4()
{
	test04();

	system("pause");
	return 0;
}