#include<iostream>
using namespace std;

//��̬��Ա
class Person
{
public:
	//��̬��Ա������������ĳ���������ж�����
	static int A;
	//���ж�����ͬһ������
	//�ڱ���׶η����ڴ�
	//���������������ʼ��

	//��̬��Ա����
	static void func()
	{
		cout << "��̬��Ա�����ĵ���" << endl;
	}
	//���ж�����ͬһ������
	static void func1()
	{
		//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
		A = 100;
	}
};

//�����ʼ��
int Person::A = 10;

void test1()
{
	Person p;
	cout << p.A << endl;
}

void test2()
{
	//��̬��Ա������������ĳ���������ж�����
	//���������ַ��ʷ�ʽ

	//1��ͨ��������з���
	Person p1;
	cout << p1.A << endl;

	//2��ͨ���������з���
	cout << Person::A << endl;
}

int main()
{
	test2();

	system("pause");
	return 0;
}