#include<iostream>
using namespace std;

//赋值运算符重载
class Person
{
public:
	Person(int age)
	{
		this->age = new int(age);
	}

	//析构函数，浅拷贝会造成堆区内存重复释放
	~Person()
	{
		if (age != NULL)
		{
			delete age;
			age = NULL;
		}
	}

	//编译器默认提供浅拷贝的赋值运算符重载，会造成问题
	//重载赋值运算符
	Person& operator=(Person& p)
	{
		if (age != NULL)
		{
			delete age;
			age = NULL;
		}
		age = new int(*p.age);
		return *this;
	}

	int* age;
};

void test04()
{
	Person p1(18);
	Person p2(20);
	Person p3(30);
	p3 = p2 = p1;	//赋值操作
	cout << *p1.age << endl;
	cout << *p2.age << endl;
	cout << *p3.age << endl;
}

int main4()
{
	test04();

	system("pause");
	return 0;
}