#include<iostream>
using namespace std;

//���μ̳�
//������
class Animal
{
public:
	int A=0;
};

//������̳н�����μ̳е����⣨virtual�ؼ��֣�
//Animal��Ϊ�����
//vbptr��������virtual base pointer�������ָ�룩
//�����ָ��ָ��vbtable������б���¼ƫ�������ҵ�Ψһһ������
//����
class Sheep :virtual public Animal
{
public:
	int B=0;
};

//����
class Camel :virtual public Animal
{
public:
	int C=0;
};

//������
class Alpaca :public Sheep, public Camel
{
public:
	int D=0;
};

void test08()
{
	//ʹ����̳У�A����ֻ��һ��
	Alpaca alpaca;
	//Ĭ��Ϊ��һ������
	alpaca.Animal::A = 10;
	//������������ݣ��������
	alpaca.Sheep::A = 11;
	alpaca.Camel::A = 12;
	alpaca.A = 13;
	cout << alpaca.Animal::A << endl;
	cout << alpaca.Sheep::A << endl;
	cout << alpaca.Camel::A << endl;
	cout << alpaca.A << endl;
}

int main()
{
	test08();

	system("pause");
	return 0;
}