#include<iostream>
using namespace std;

//��Ա���� �� ��Ա���� �ֿ��洢
class Person
{
	int m_A;	//�Ǿ�̬��Ա������������Ķ�����

	static int m_B;	//��̬��Ա�������������������

	void func() {}	//�Ǿ�̬��Ա�������������������

	static void func2() {}	//��̬��Ա�������������������
};

int Person::m_B = 0;

void test01()
{
	Person p;
	//�ն���ռ���ڴ�ռ�Ϊ��1
	//C++���������ÿ���ն������һ���ֽڿռ䣬���ֿն���ռ�ڴ�λ��
	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
	cout << sizeof(p) << endl;
}

int main1()
{
	test01();

	system("pause");
	return 0;
}