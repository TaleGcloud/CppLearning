#include<iostream>
using namespace std;

//空指针调用成员函数
class Person
{
public:

	int age;

	void showPersonAge()	//有对象
	{
		cout << age << endl;
	}

	void showClassName()	//无对象
	{
		cout << "this is Person class" << endl;
	}
};

void test04()
{
	Person* p = NULL;
	//空指针能调用不使用对象的成员函数
	p->showClassName();
}

int main3()
{
	test04();

	system("pause");
	return 0;
}