#include<iostream>
using namespace std;

//����ѧ����������
struct Student
{
	//����
	string name;
	//����
	int age;
	//�ɼ�
	int score;
};

//ͨ��ѧ���������ʹ���ѧ��


int main1()
{
	Student s1 = { "����",18,90 };
	//�ṹ��ָ��
	Student* p = &s1;
	//��->���ʽṹ��ָ��ı���
	p->age;

	system("pause");

	return 0;
}