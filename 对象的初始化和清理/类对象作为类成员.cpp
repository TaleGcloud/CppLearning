#include<iostream>
using namespace std;

//�������Ϊ���Ա

class Phone
{
public:

	string phoneName;

	Phone() {}

	Phone(string name)
	{
		phoneName = name;
	}
};

class Person
{
public:

	string p_name;

	//�������ȱ����죬Ӧ��ȷ���������ܱ�����
	Phone p_phone;

	Person(string name, string phone)
	{
		p_name = name;
		p_phone.phoneName = phone;
	}
};

int main6()
{

	system("pause");
	return 0;
}