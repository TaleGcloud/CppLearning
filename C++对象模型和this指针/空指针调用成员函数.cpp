#include<iostream>
using namespace std;

//��ָ����ó�Ա����
class Person
{
public:

	int age;

	void showPersonAge()	//�ж���
	{
		cout << age << endl;
	}

	void showClassName()	//�޶���
	{
		cout << "this is Person class" << endl;
	}
};

void test04()
{
	Person* p = NULL;
	//��ָ���ܵ��ò�ʹ�ö���ĳ�Ա����
	p->showClassName();
}

int main3()
{
	test04();

	system("pause");
	return 0;
}