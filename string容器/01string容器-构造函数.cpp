#include<iostream>
using namespace std;

//string���캯��
//C++��string������һ����
void test01()
{
	//Ĭ�Ϲ���
	string s1;

	//c����ֹ���
	const char* str = "hello world";
	string s2(str);

	//��������
	string s3(s2);

	//�ظ��ַ�����
	string s4(10, 'a');
}

int main1()
{
	test01();

	system("pause");
	return 0;
}