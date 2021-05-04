#include<iostream>
using namespace std;

//类模板和函数模板的区别
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
	//1、类模板没有自动类型推导使用方式

	//2、类模板在模板参数列表中可以有默认参数
}

int main2()
{

	system("pause");
	return 0;
}