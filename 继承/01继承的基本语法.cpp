#include<iostream>
using namespace std;

//�̳�ʵ��
//�﷨��class ���ࣺ�̳з�ʽ ����
//����Ҳ��Ϊ������
//����Ҳ��Ϊ����

//����ҳ��
class BasePage
{
public:
	void header()
	{
		cout << "ͷ��ҳ��" << endl;
	}

	void left()
	{
		cout << "���ҳ��" << endl;
	}

	void footer()
	{
		cout << "�ײ�ҳ��" << endl;
	}
};

//Javaҳ��
class Java :public BasePage
{
public:
	void content()
	{
		cout << "Javaҳ��" << endl;
	}
};

//Pythonҳ��
class Python :public BasePage
{
public:
	void content()
	{
		cout << "Pythonҳ��" << endl;
	}
};

//C++ҳ��
class Cpp :public BasePage
{
public:
	void content()
	{
		cout << "Cppҳ��" << endl;
	}
};

void test01()
{
	Java java;
	java.header();
	java.left();
	java.content();
	java.footer();
}

int main1()
{
	test01();

	system("pause");
	return 0;
}