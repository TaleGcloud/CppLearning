#include<iostream>
using namespace std;

//模板的局限性
//模板并不是万能的，有些特定数据类型，需要用具体化方式做特殊实现

class Person
{
public:

	Person(string name, int age)
	{
		this->name = name;
		this->age = age;
	}

	//运算符重载
	//bool operator==(person& b)
	//{
	//	if (name == b.name && age == b.age)
	//		return true;
	//	else
	//		return false;
	//}

	string name;
	int age;
};

//对比两个数据是否相等
template<class T>
bool myCompare(T& a, T& b)
{
	if (a == b)
		return true;
	else
		return false;
}

//利用具体化Person版本实现代码，具体化优先调用
template<> bool myCompare(Person& a, Person& b)
{
	if (a.name == b.name && a.age == b.age)
		return true;
	else
		return false;
}

void test06()
{
	int a = 10;
	int b = 20;
	cout << myCompare(a, b) << endl;

	Person A("zhangsan", 18);
	Person B("zhangsan", 18);
	cout << myCompare(A, B) << endl;
}

int main()
{
	test06();

	system("pause");
	return 0;
}