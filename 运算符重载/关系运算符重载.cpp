#include<iostream>
using namespace std;

//��ϵ���������
class Person
{
public:
	string name;

	int age = 0;

	Person(string name, int age)
	{
		this->name = name;
		this->age = age;
	}

	//��ϵ���������
	bool operator==(Person& p)
	{
		if (age == p.age && name == p.name)
			return true;
		else
			return false;
	}
};

void test05()
{
	Person p1("����", 10);
	Person p2("����", 10);
	if (p1 == p2)
		cout << "p1p2���" << endl;
	else
		cout << "p1p2�����" << endl;
}

int main5()
{
	test05();

	system("pause");
	return 0;
}