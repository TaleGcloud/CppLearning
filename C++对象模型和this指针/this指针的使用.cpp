#include<iostream>
using namespace std;

class Person
{
public:

	int age = 0;

	Person(int age)
	{
		//1��������Ƴ�ͻ
		this->age = age;
	}

	//2�����ض�����
	Person& add(Person p)	//��������Ϊ���ã����ᴴ���µĶ��󣬼�������ֵ
	{
		this->age += p.age;
		//thisָ��p1��ָ�룬*thisָ�����p1
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
	//��ʽ���˼��
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