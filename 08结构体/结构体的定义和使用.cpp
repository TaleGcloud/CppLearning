#include<iostream>
using namespace std;

//创建学生数据类型
struct Student
{
	//姓名
	string name;
	//年龄
	int age;
	//成绩
	int score;
};

//通过学生数据类型创建学生


int main1()
{
	Student s1 = { "张三",18,90 };
	//结构体指针
	Student* p = &s1;
	//用->访问结构体指针的变量
	p->age;

	system("pause");

	return 0;
}