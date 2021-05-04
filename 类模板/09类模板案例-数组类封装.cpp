#include<iostream>
using namespace std;
#include"MyArray.hpp"

void printIntArray(MyArray<int>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << endl;
	}
}

void test09()
{
	MyArray<int> arr1(5);

	for (int i = 0; i < 5; i++)
	{
		//利用尾插法向数组中插入数据
		arr1.Push_Back(i);
	}

	printIntArray(arr1);

	cout << "arr1的容量为：" << arr1.getCapacity() << endl;
	cout << "arr1的大小为：" << arr1.getSize() << endl;
}

//测试自定义数据类型
class Person
{
public:

	Person() {}
	Person(string name,int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	friend ostream& operator<<(ostream& cout, Person& p);

	string m_Name;
	int m_Age;
};

ostream& operator<<(ostream& cout, Person& p)
{
	cout << p.m_Name << "\t" << p.m_Age << endl;
	return cout;
}

void printPersonArray(MyArray<Person>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << endl;
	}
}

void test10()
{
	MyArray<Person> arr(10);
	Person p1("sun", 1000);
	Person p2("tang", 200);
	Person p3("zhu", 900);
	Person p4("sha", 800);
	Person p5("han", 20);

	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);

	printPersonArray(arr);
}

int main()
{
	test10();

	system("pause");
	return 0;
}