#include<iostream>
using namespace std;
#include<fstream>

//�������ļ� д�ļ�
class Person
{
public:
	char Name[64];
	int age;
};

void test03()
{
	//1������ͷ�ļ�	fstream
	//2������������
	ofstream ofs;

	//3��ָ���򿪷�ʽ
	ofs.open("person.txt", ios::out | ios::binary);

	//4��д�ļ�
	Person p = { "����",18 };
	ofs.write((const char*)&p, sizeof(Person));

	//5���ر��ļ�
	ofs.close();
}

int main3()
{
	test03();

	system("pause");
	return 0;
}