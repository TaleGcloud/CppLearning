#include<iostream>
using namespace std;

//�������������
class Myint
{
	friend ostream& operator<<(ostream& cout, Myint myint);

public:
	Myint()
	{
		num = 0;
	}

	//����ǰ��++�����
	Myint& operator++()	//��������Ϊ��һֱ��һ�����ݵ�������
	{
		//�Ƚ���++����
		num++;
		//�ٽ�������з���
		return *this;
	}

	//���غ���++�����
	//int����ռλ������������������ǰ�úͺ��õ���
	Myint operator++(int)
	{
		//�ȼ�¼��ʱ���
		Myint temp = *this;
		//Ȼ�����
		num++;
		//��󷵻ؼ�¼���
		return temp;
	}

private:
	int num;
};

//�������������
ostream& operator<<(ostream& cout, Myint myint)
{
	cout << myint.num;
	return cout;
}

void test03()
{
	Myint myint;
	cout << ++myint << endl;
	Myint myint2;
	cout << myint2++ << endl;
}

int main3()
{
	test03();

	system("pause");
	return 0;
}