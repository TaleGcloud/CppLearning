#include<iostream>
using namespace std;

//�����ǳ����
class Person
{
public:

	int p_age = 0;
	int* p_height = NULL;

	Person()
	{
		cout << "Person���캯������" << endl;
	}

	Person(int age, int height)
	{
		p_age = age;
		p_height = new int(height);	//�ڶ����п��ٿռ�
		cout << "Person�вι��캯������" << endl;
	}

	//���ֶ�����ָ�룬��Ҫ�Լ�ʵ���������ֹ��������
	Person(const Person& p)
	{
		p_age = p.p_age;
		//���
		p_height = new int(*p.p_height);
	}

	~Person()
	{
		//�������룬�����������������ͷŲ���
		if (p_height != NULL)
		{
			delete p_height;
			p_height = NULL;
		}
		cout << "Person��������������" << endl;
	}
};

int main4()
{

	system("pause");
	return 0;
}