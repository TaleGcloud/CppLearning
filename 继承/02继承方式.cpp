#include<iostream>
using namespace std;

//继承方式
class Base1
{
public:
	int A;

protected:
	int B;

private:
	int C;
};

//公共继承
class Publ :public Base1
{
public:
	void func()
	{
		A = 10;	//公共权限
		B = 11;	//保护权限
		//C = 12;	//私有权限
	}
};

//保护继承
class Prot :protected Base1
{
public:
	void func()
	{
		A = 20;	//保护权限
		B = 21;	//保护权限
		//C = 22;	//私有权限
	}
};

//私有继承
class Priv :private Base1
{
public:
	void func()
	{
		A = 30;	//私有权限
		B = 31;	//私有权限
		//C = 32;	//私有权限
	}
};
class PrivSon :public Priv
{

};

void test02()
{
	Publ publ;
	publ.A = 100;
	//publ.B = 101;	//保护权限：类内可以访问，类外不能访问

	Prot prot;
	prot.func();
	//prot.A = 200;	//保护权限：类内可以访问，类外不能访问
}

int main2()
{
	test02();

	system("pause");
	return 0;
}