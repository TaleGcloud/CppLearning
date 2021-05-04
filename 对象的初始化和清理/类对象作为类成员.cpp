#include<iostream>
using namespace std;

//类对象作为类成员

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

	//其他类先被构造，应先确保其他类能被构造
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