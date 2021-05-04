#include<iostream>
using namespace std;
#include<vector>


//vector容器存放自定义数据类型
class Person
{
public:

	Person(string name,int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

void test02()
{
	vector<Person> v;
	Person p1("zs", 10);
	Person p2("qa", 20);
	Person p3("er", 30);
	Person p4("yt", 40);
	Person p5("gh", 50);

	//容器中存放数据
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//遍历容器中的数据
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//cout << (*it).m_Name << "\t" << (*it).m_Age << endl;
		cout << it->m_Name << "\t" << it->m_Age << endl;
	}
}

//存放自定义数据类型指针
void test022()
{
	vector<Person*> v;
	Person p1("zs", 10);
	Person p2("qa", 20);
	Person p3("er", 30);
	Person p4("yt", 40);
	Person p5("gh", 50);

	//容器中存放数据
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	//遍历容器
	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << (*it)->m_Name << "\t" << (*it)->m_Age << endl;
	}
}

int main2()
{
	test02();
	test022();

	system("pause");
	return 0;
}