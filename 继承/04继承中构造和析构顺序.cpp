#include<iostream>
using namespace std;

//�̳��й��������
class Base
{
public:
	Base()
	{
		cout << "Base���캯��" << endl;
	}

	~Base()
	{
		cout << "Base��������" << endl;
	}
};

class Son :public Base
{
public:
	Son()
	{
		cout << "Son���캯��" << endl;
	}

	~Son()
	{
		cout << "Son��������" << endl;
	}
};

void test04()
{
	//����˳��������˳���෴
	Son son;
}

int main4()
{
	test04();

	system("pause");
	return 0;
}