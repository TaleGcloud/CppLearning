#include<iostream>
using namespace std;

//多态
//动态多态满足条件：
//1、有继承关系
//2、子类重写父类中的虚函数

//动态多态使用
//父类的指针或引用指向子类对象

class Animal
{
public:
	//虚函数
	//内部为vfptr（virtual function pointer）虚函数指针
	//指向虚函数表（vftable）记录虚函数地址 &Animal::speak
	virtual void speak()
	{
		cout << "发声" << endl;
	}
};

class Cat :public Animal
{
public:
	//重写虚函数
	//子类中的虚函数表内部会替换成子类的虚函数地址 &Cat::speak
	void speak()
	{
		cout << "喵喵" << endl;
	}
};

class Dog :public Animal
{
public:
	//重写
	void speak()
	{
		cout << "汪汪" << endl;
	}
};

//执行说话
//地址早绑定，在编译阶段确定函数地址
void doSpeak(Animal& animal)	//Animal& animal -> 引用指向子类对象
{
	animal.speak();
}

void test01()
{
	Cat cat;
	//C++允许父子类型转换
	//需要函数不能提前绑定，在运行阶段进行绑定，地址晚绑定
	doSpeak(cat);
	Dog dog;
	doSpeak(dog);
}

int main1()
{
	test01();

	system("pause");
	return 0;
}