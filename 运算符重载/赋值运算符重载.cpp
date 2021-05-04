#include<iostream>
using namespace std;

//��ֵ���������
class Person
{
public:
	Person(int age)
	{
		this->age = new int(age);
	}

	//����������ǳ��������ɶ����ڴ��ظ��ͷ�
	~Person()
	{
		if (age != NULL)
		{
			delete age;
			age = NULL;
		}
	}

	//������Ĭ���ṩǳ�����ĸ�ֵ��������أ����������
	//���ظ�ֵ�����
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
	p3 = p2 = p1;	//��ֵ����
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