#include<iostream>
using namespace std;
#include<fstream>

//�ı��ļ�-д�ļ�
void test01()
{
	//1������ͷ�ļ�	fstream
	//2������������
	ofstream ofs;
	//3��ָ���򿪷�ʽ
	ofs.open("test.txt", ios::out);
	//4��д����
	ofs << "�ı��ļ�����" << endl;
	ofs << "12345" << endl;
	//5���ر��ļ�
	ofs.close();
}

int main1()
{
	test01();

	system("pause");
	return 0;
}