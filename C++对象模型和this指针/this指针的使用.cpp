#include<iostream>
using namespace std;

class Person
{
public:

	int age = 0;

	Person(int age)
	{
		//1、解决名称冲突
		this->age = age;
	}

	//2、返回对象本身
	Person& add(Person p)	//返回类型为引用，不会创建新的对象，继续修饰值
	{
		this->age += p.age;
		//this指向p1的指针，*this指向就是p1
		return *this;
	}
};

void test02()
{
	Person p(18);
	cout << p.age << endl;
}

void test03()
{
	Person p1(10);
	Person p2(1);
	//链式编程思想
	p1.add(p2).add(p2).add(p2);
	cout << p1.age << endl;
}

int main2()
{
	test02();
	test03();

	system("pause");
	return 0;
}