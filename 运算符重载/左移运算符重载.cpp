#include<iostream>
using namespace std;

//�������������
class Person
{
	//ȫ�ֺ�������Ԫ
	friend ostream& operator<<(ostream& cout, Person& p);

public:
	Person(int a, int b)
	{
		A = a;
		B = b;
	}

private:
	//void operator<<( cout )	
	//p.operator<<(cout) ��Ϊ p << cout ������Ҫ��
	//�������ó�Ա�����������������
	int A = 0;
	int B = 0;
};

//ֻ������ȫ�ֺ����������������
//ostream���������cout�����������
ostream& operator<<(ostream& cout, Person& p)
{
	cout << "Person::A=" << p.A << "\t" << "Person::B=" << p.B;
	return cout;
}

void test02()
{
	Person p(10, 11);
	//operator<<(cout , p) ����Ϊ cout << p
	//�����Ǻ����ĵ���
	cout << p << endl;	//��ʽ���
}

int main2()
{
	test02();

	system("pause");
	return 0;
}