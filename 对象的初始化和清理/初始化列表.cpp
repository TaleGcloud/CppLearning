#include<iostream>
using namespace std;

//��ʼ���б�
class Person
{
public:

	//��ͳ��ʼ������
	/*Person(int a, int b, int c)
	{
		p_A = a;
		p_B = b;
		p_C = c;
	}*/

	//��ʼ���б��ʼ������
	Person(int a, int b, int c) :p_A(a), p_B(b), p_C(c)
	{

	}

	int p_A;
	int p_B;
	int p_C;
};

int main5()
{

	system("pause");
	return 0;
}