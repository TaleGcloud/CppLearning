#include<iostream>
using namespace std;

//��������(���ܳ��ֶ�����)
//�����ú�������ͬ����߸�����

//�������ص�ע�����
//1��������Ϊ���ص�����
void func(int &a)
{
	cout << "func(int &a)" << endl;
}

void func(const int& a)//����
{
	cout << "func(const int &a)" << endl;
}

//2��������������Ĭ�ϲ���
void func2(int a, int b)
{
	cout << a+b << endl;
}

void func2(int a)
{
	cout << a+10 << endl;
}

int main()
{
	system("pause");
	return 0;
}