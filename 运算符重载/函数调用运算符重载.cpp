#include<iostream>
using namespace std;

//����������������أ��º�����
//����()

//��ӡ�����
class MyPrint
{
public:

	//���غ������������
	void operator()(string test)
	{
		cout << test << endl;
	}
};

void print2(string test)
{
	cout << test << endl;
}

void test06()
{
	MyPrint print;
	print("hello world");	//�º��������ƺ����ĵ���
	print2("hello world");

	//������������
	MyPrint()("s");
}

int main()
{
	test06();

	system("pause");
	return 0;
}