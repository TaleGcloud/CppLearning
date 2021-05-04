#include<iostream>
using namespace std;

//菱形继承
//动物类
class Animal
{
public:
	int A=0;
};

//利用虚继承解决菱形继承的问题（virtual关键字）
//Animal称为虚基类
//vbptr————virtual base pointer（虚基类指针）
//虚基类指针指向vbtable（虚基列表）记录偏移量来找到唯一一份数据
//羊类
class Sheep :virtual public Animal
{
public:
	int B=0;
};

//驼类
class Camel :virtual public Animal
{
public:
	int C=0;
};

//羊驼类
class Alpaca :public Sheep, public Camel
{
public:
	int D=0;
};

void test08()
{
	//使用虚继承，A属性只有一份
	Alpaca alpaca;
	//默认为第一个属性
	alpaca.Animal::A = 10;
	//会产生两份数据，造成问题
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