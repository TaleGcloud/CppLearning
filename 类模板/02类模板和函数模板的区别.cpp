#include<iostream>
using namespace std;

//��ģ��ͺ���ģ�������
template<class NameType, class AgeType>
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson()
	{
		cout << "name=" << this->m_Name << endl;
		cout << "age=" << this->m_Age << endl;
	}

	NameType m_Name;
	AgeType m_Age;
};

void test02()
{
	//1����ģ��û���Զ������Ƶ�ʹ�÷�ʽ

	//2����ģ����ģ������б��п�����Ĭ�ϲ���
}

int main2()
{

	system("pause");
	return 0;
}