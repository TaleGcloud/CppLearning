#include<iostream>
using namespace std;

//�̳�ͬ����Ա����ʽ
class Base05
{
public:
	Base05()
	{
		A = 100;
	}

	int A;

	void func()
	{
		cout << "This is Base05" << endl;
	}
};

class Son05 :public Base05
{
public:
	Son05()
	{
		A = 10;
	}

	int A;

	void func()
	{
		cout << "This is sonBase" << endl;
	}
};

void test05()
{
	Son05 son;
	//ͬ����Ա����
	cout << "Son�е�A:" << son.A << endl;
	cout << "Base05�е�A:" << son.Base05::A << endl;
	//ͬ����Ա����
	son.func();
	son.Base05::func();
	//ֻҪ����͸���ͬ����Ҫ�ø����Ҫ��������
}

int main5()
{
	test05();

	system("pause");
	return 0;
}