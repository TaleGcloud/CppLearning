#include<iostream>
using namespace std;

//��ģ���Ա��������ʵ��
template<class T1, class T2>
class Person
{
public:

	Person(T1 name, T2 age);
	//{
	//	this->m_Name = name;
	//	this->m_Age = age;
	//}

	void showPerson();
	//{
	//	cout<<m_Name<<"\t"<<m_Age<<endl;
	//}

	T1 m_Name;
	T2 m_Age;
};

//���캯������ʵ��
template<class T1, class T2>
Person<T1,T2>::Person(T1 name, T2 age)
{
	this->m_Name = name;
	this->m_Age = age;
}

//��Ա��������ʵ��
template<class T1, class T2>
void Person<T1,T2>::showPerson()
{
	cout << m_Name << "\t" << m_Age << endl;
}

void test06()
{
	Person<string, int>P("Tom", 20);
	P.showPerson();
}

int main6()
{
	test06();

	system("pause");
	return 0;
}