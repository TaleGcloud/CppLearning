#include<iostream>
using namespace std;

//��ͨ�����ͺ���ģ�������

//1����ͨ�������ÿ��Է�����ʽ����ת��
//2������ģ�� ���Զ������Ƶ��������Է�����ʽ����ת��
//3������ģ�� ����ʾָ�����ͣ����Է�����ʽ����ת��

//��ͨ����
int add(int a, int b)
{
	return a + b;
}

//����ģ��
template<class T>
T add2(T a, T b)
{
	return a + b;
}

void test04()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	cout << add(a, c) << endl;

	//�Զ������Ƶ�
	cout << add2(a, b) << endl;

	//��ʾָ������
	cout << add2<int>(a, c) << endl;
}

int main4()
{
	test04();

	system("pause");
	return 0;
}