#include<iostream>
using namespace std;

//��̳��﷨��ʵ�ʲ�����ʹ�ã�
class Base1
{
public:
	int A=0;
};

class Base2
{
public:
	int A=1;
};

//��̳�
class Son07 :public Base1, public Base2
{
public:
	int A=2;
};

void test07()
{
	Son07 son;
	//�̳����е�����
	cout << sizeof(son) << endl;
	cout << son.A << endl;
	//ͨ������������ͬ����Ա
	cout << son.Base1::A << endl;
	cout << son.Base2::A << endl;
}

int main7()
{
	test07();

	system("pause");
	return 0;
}