#include<iostream>
using namespace std;

//初始化列表
class Person
{
public:

	//传统初始化操作
	/*Person(int a, int b, int c)
	{
		p_A = a;
		p_B = b;
		p_C = c;
	}*/

	//初始化列表初始化属性
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