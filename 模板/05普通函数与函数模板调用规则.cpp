#include<iostream>
using namespace std;

//��ͨ�����뺯��ģ����ù���
//1���������ģ�����ͨ����������ʵ�֣����ȵ�����ͨ����
//2������ͨ����ģ������б���ǿ�Ƶ��ú���ģ��
//3������ģ��Ҳ���Է�������
//4���������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��

void myPrint(int a, int b)
{
	cout << "������ͨ����" << endl;
}

template<class T>
void myPrint(T a, T b)
{
	cout << "���ú���ģ��" << endl;
}

template<class T>
void myPrint(T a, T b, T c)
{
	cout << "���ú���ģ������" << endl;
}

void test05()
{
	myPrint(1, 2);

	//��ģ������б�ǿ�Ƶ��ú���ģ��
	myPrint<>(3, 4);
}

int main5()
{
	test05();

	system("pause");
	return 0;
}