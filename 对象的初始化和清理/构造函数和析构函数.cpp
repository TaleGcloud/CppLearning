#include<iostream>
using namespace std;

//����ĳ�ʼ��������

class Person
{
public:
	//1�����캯��	���г�ʼ������
	Person()
	{
		cout << "Person���캯���ѵ���" << endl;
	}

	//2����������	�����������
	~Person()
	{
		cout << "Person���������ѵ���" << endl;
	}
};

int main1()
{

	system("pause");
	return 0;
}