#include<iostream>
using namespace std;

//����Ȩ��
//����Ȩ��
//public	 ��Ա  ���ڿ��Է���	����Ҳ���Է���
//����Ȩ��
//protected	 ��Ա  ���ڿ��Է���  ���ⲻ���Է���
							  //�̳��У�������Է��ʸ��ౣ������
//˽��Ȩ��
//private	 ��Ա  ���ڿ��Է���  ���ⲻ���Է���
							  //���಻�ɷ��ʸ���˽������

class Person
{
private:

	//����(���ÿɶ���д)
	string p_name;

	//���䣨����ֻ����
	int p_age = 0;

public:
	//��������
	void setName(string name)
	{
		p_name = name;
	}
	//��ȡ����
	string getName()
	{
		return p_name;
	}
	//��������
	void setAge(int age)
	{
		if (age > 0 && age <= 150)
			p_age = age;
		else
			p_age = 0;
	}
	//��ȡ����
	int getAge()
	{
		return p_age;
	}
};

int main()
{

	system("pause");
	return 0;
}