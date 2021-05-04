#include<iostream>
using namespace std;

//学生类
class Student
{
public://公共权限

	//类中属性和行为都属于成员
	//属性：成员属性 成员变量
	//行为：成员函数 成员方法

	//属性：
	//姓名
	string s_name;
	//学号
	int s_studentNumber;

	//行为：
	//赋值
	void setName(string name)
	{
		s_name = name;
	}

	void setNumber(int id)
	{
		s_studentNumber = id;
	}

	//显示
	void showName()
	{
		cout << s_name << endl;
	}

	void showNumber()
	{
		cout << s_studentNumber << endl;
	}

};

int main2()
{

	system("pause");
	return 0;
}