#include<iostream>
using namespace std;

class Person
{
public:

	int A;

	//mutable���εı����������ڳ������н����޸�
	mutable int B;

	//������
	//thisָ��ı��ʣ���ָ�볣����ָ���ָ���ǲ������޸ĵ�
	//��Ա���������const�����ε���thisָ��thisָ���ֵҲ�������޸�
	void showPerson() const
	{
		//this = NULL;	//thisָ�벻�����޸�ָ���ָ��
		//A = 100;
		B = 100;
	}
};

void test05()
{
	//������,�������޸Ĵ˶�������
	const Person p;
	p.B = 101;	//mutable���Σ����޸�

	//������ֻ�ܵ��ó�����
	p.showPerson();
}

int main()
{

	system("pause");
	return 0;
}