#include<iostream>
using namespace std;

//ģ��ľ�����
//ģ�岢�������ܵģ���Щ�ض��������ͣ���Ҫ�þ��廯��ʽ������ʵ��

class Person
{
public:

	Person(string name, int age)
	{
		this->name = name;
		this->age = age;
	}

	//���������
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

//�Ա����������Ƿ����
template<class T>
bool myCompare(T& a, T& b)
{
	if (a == b)
		return true;
	else
		return false;
}

//���þ��廯Person�汾ʵ�ִ��룬���廯���ȵ���
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