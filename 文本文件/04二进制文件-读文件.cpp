#include<iostream>
using namespace std;
#include<fstream>

//�������ļ� ���ļ�
class Person
{
public:
	char name[64];
	int age;
};

void test04()
{
	//1������ͷ�ļ�

	//2������������
	ifstream ifs;

	//3�����ļ� �����ж��Ƿ�򿪳ɹ�
	ifs.open("person.txt", ios::in | ios::binary);
	
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	
	//4�����ļ�
	Person p;

	ifs.read((char*)&p, sizeof(Person));

	cout << "������" << p.name << endl << "���䣺" << p.age << endl;

	//5���ر��ļ�
	ifs.close();
}

int main()
{
	test04();

	system("pause");
	return 0;
}