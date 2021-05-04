#include<iostream>
using namespace std;

//����ģ��
//�����������ͺ���
void swapInt(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

//�����������ͺ���
void swapDouble(double& a, double& b)
{
	double temp = a;
	a = b;
	b = temp;
}

//����ģ��
template<typename T>	//����һ��ģ�壬���߱��������������T��Ҫ����
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

void test01()
{
	int a = 10;
	int b = 20;
	//swapInt(a, b);
	//���ú���ģ�彻��
	//1���Զ������Ƶ�
	mySwap(a, b);
	cout << a << b << endl;

	double c = 1.1;
	double d = 2.2;
	//swapDouble(c, d);
	//2����ʾָ������
	mySwap<double>(c, d);
	cout << c << d << endl;
}

int main1()
{
	test01();

	system("pause");
	return 0;
}