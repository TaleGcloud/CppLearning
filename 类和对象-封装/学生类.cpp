#include<iostream>
using namespace std;

//ѧ����
class Student
{
public://����Ȩ��

	//�������Ժ���Ϊ�����ڳ�Ա
	//���ԣ���Ա���� ��Ա����
	//��Ϊ����Ա���� ��Ա����

	//���ԣ�
	//����
	string s_name;
	//ѧ��
	int s_studentNumber;

	//��Ϊ��
	//��ֵ
	void setName(string name)
	{
		s_name = name;
	}

	void setNumber(int id)
	{
		s_studentNumber = id;
	}

	//��ʾ
	void showName()
	{
		cout << s_name << endl;
	}

	void showNumber()
	{
		cout << s_studentNumber << endl;
	}

};

int main2()
{

	system("pause");
	return 0;
}