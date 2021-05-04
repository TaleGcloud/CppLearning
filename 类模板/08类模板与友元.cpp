#include<iostream>
using namespace std;

//��ģ������Ԫ

template<class T1, class T2>
class Person;

//ͨ��ȫ�ֺ�����ӡPerson��Ϣ
//����ʵ��
template<class T1, class T2>
void PrintPerson2(Person<T1, T2> p)
{
	cout << p.m_Name << "\t" << p.m_Age << endl;
}

template<class T1,class T2>
class Person
{
	//ȫ�ֺ��� ����ʵ��
	friend void PrintPerson(Person<T1, T2> p)
	{
		cout << p.m_Name << "\t" << p.m_Age << endl;
	}

	//ȫ�ֺ��� ����ʵ��
	//�ӿ�ģ��Ĳ����б�
	//���ȫ�ֺ���������ʵ�֣���Ҫ�ñ�������ǰ֪��ģ�����
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