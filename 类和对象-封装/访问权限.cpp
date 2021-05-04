#include<iostream>
using namespace std;

//访问权限
//公共权限
//public	 成员  类内可以访问	类外也可以访问
//保护权限
//protected	 成员  类内可以访问  类外不可以访问
							  //继承中，子类可以访问父类保护内容
//私有权限
//private	 成员  类内可以访问  类外不可以访问
							  //子类不可访问父类私有内容

class Person
{
private:

	//姓名(设置可读可写)
	string p_name;

	//年龄（设置只读）
	int p_age = 0;

public:
	//设置姓名
	void setName(string name)
	{
		p_name = name;
	}
	//获取姓名
	string getName()
	{
		return p_name;
	}
	//设置年龄
	void setAge(int age)
	{
		if (age > 0 && age <= 150)
			p_age = age;
		else
			p_age = 0;
	}
	//获取年龄
	int getAge()
	{
		return p_age;
	}
};

int main()
{

	system("pause");
	return 0;
}