#include<iostream>
using namespace std;

//�̳з�ʽ
class Base1
{
public:
	int A;

protected:
	int B;

private:
	int C;
};

//�����̳�
class Publ :public Base1
{
public:
	void func()
	{
		A = 10;	//����Ȩ��
		B = 11;	//����Ȩ��
		//C = 12;	//˽��Ȩ��
	}
};

//�����̳�
class Prot :protected Base1
{
public:
	void func()
	{
		A = 20;	//����Ȩ��
		B = 21;	//����Ȩ��
		//C = 22;	//˽��Ȩ��
	}
};

//˽�м̳�
class Priv :private Base1
{
public:
	void func()
	{
		A = 30;	//˽��Ȩ��
		B = 31;	//˽��Ȩ��
		//C = 32;	//˽��Ȩ��
	}
};
class PrivSon :public Priv
{

};

void test02()
{
	Publ publ;
	publ.A = 100;
	//publ.B = 101;	//����Ȩ�ޣ����ڿ��Է��ʣ����ⲻ�ܷ���

	Prot prot;
	prot.func();
	//prot.A = 200;	//����Ȩ�ޣ����ڿ��Է��ʣ����ⲻ�ܷ���
}

int main2()
{
	test02();

	system("pause");
	return 0;
}