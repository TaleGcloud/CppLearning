#include<iostream>
using namespace std;

//�Ӻ����������
class Person
{
public:
	int A = 0;
	int B = 0;

	Person() {}

	Person(int a, int b)
	{
		A = a;
		B = b;
	}

	//��Ա��������'+'��
	Person operator+(Person& p)
	{
		return Person(A + p.A, B + p.B);
	}
};

//ȫ�ֺ�������'+'��
//Person operator+(Person& p1, Person& p2)
//{
//    Person temp;
//	temp.A = p1.A + p2.A;
//	temp.B = p1.B + p2.B;
//	return temp;
//}

//�������������
Person operator+(Person& p1, int num)
{
	Person temp;
	temp.A = p1.A + num;
	temp.B = p1.B + num;
	return temp;
}

void test01()
{
	Person p1(10, 11);
	Person p2(20, 21);
	Person p3 = p1 + p2;	//�򻯣�p1.operator+(p2);
	Person p4 = p3 + 4;
	cout << p3.A << "\t" << p3.B << endl;
	cout << p4.A << "\t" << p4.B << endl;
}

int main1()
{
	test01();

	system("pause");
	return 0;
}