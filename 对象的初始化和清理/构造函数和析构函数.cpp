#include<iostream>
using namespace std;

//对象的初始化和清理

class Person
{
public:
	//1、构造函数	进行初始化操作
	Person()
	{
		cout << "Person构造函数已调用" << endl;
	}

	//2、析构函数	进行清理操作
	~Person()
	{
		cout << "Person析构函数已调用" << endl;
	}
};

int main1()
{

	system("pause");
	return 0;
}