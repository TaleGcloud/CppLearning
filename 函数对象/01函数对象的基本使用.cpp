#include<iostream>
using namespace std;

//�������󣨷º�����

class myAdd
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};

class myPrint
{
public:
	myPrint()
	{
		this->count = 0;
	}

	void operator()(string test)
	{
		cout << test << endl;
		this->count++;
	}

	//��¼���ô���
	int count;
};

void doPrint(myPrint& m, string s)
{
	m(s);
}

void test01()
{
	//1������������ʹ�õ�ʱ�򣬿�������ͨ����һ���������в����ͷ���ֵ
	myAdd myadd;
	cout << myadd(10, 20) << endl;

	//2���������󳬳�����ͨ�����ĸ����������������Լ���״̬
	myPrint myprint;
	myprint("��������");
	myprint("��������");
	cout << "myprint���ô���Ϊ��" << myprint.count << endl;

	//3���������������Ϊ��������
	myPrint myprint2;
	doPrint(myprint2, "hello");
}

int main1()
{
	test01();

	return 0;
}