#include<iostream>
using namespace std;

//string�ַ���ƴ��
void test03()
{
	string str1 = "��";
	str1 += "��";
	cout << str1 << endl;

	//append(string,int,int)�ӵڼ�λ��ʼ����λ
	str1.append("���");
	cout << str1 << endl;
}

int main3()
{
	test03();

	system("pause");
	return 0;
}