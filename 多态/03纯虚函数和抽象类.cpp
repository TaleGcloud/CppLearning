#include<iostream>
using namespace std;

//���麯���ͳ�����
class Base
{
public:
	//���麯��
	//����ֻҪ��һ�����麯���������Ϊ������
	//�����ࣺ
	//1���޷�ʵ��������
	//2������������࣬����Ҫ��д�����еĴ��麯��������Ҳ�ǳ�����
	virtual void func() = 0;
};

class Son :public Base
{
public:
	virtual void func()
	{
		cout << "func��������" << endl;
	}
};

void test03()
{
	Base* base = new Son;
	base->func();
}

int main3()
{
	test03();

	system("pause");
	return 0;
}