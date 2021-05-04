#include<iostream>
using namespace std;

//关系运算符重载
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

	//关系运算符重载
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
	Person p1("张三", 10);
	Person p2("李四", 10);
	if (p1 == p2)
		cout << "p1p2相等" << endl;
	else
		cout << "p1p2不相等" << endl;
}

int main5()
{
	test05();

	system("pause");
	return 0;
}