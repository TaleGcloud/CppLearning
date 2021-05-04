#include<iostream>
using namespace std;

class Person
{
public:

	int A;

	//mutable修饰的变量，可以在常函数中进行修改
	mutable int B;

	//常函数
	//this指针的本质，是指针常量，指针的指向是不可以修改的
	//成员函数后面加const，修饰的是this指向，this指向的值也不可以修改
	void showPerson() const
	{
		//this = NULL;	//this指针不可以修改指针的指向
		//A = 100;
		B = 100;
	}
};

void test05()
{
	//常对象,不可以修改此对象属性
	const Person p;
	p.B = 101;	//mutable修饰，可修改

	//常对象只能调用常函数
	p.showPerson();
}

int main()
{

	system("pause");
	return 0;
}