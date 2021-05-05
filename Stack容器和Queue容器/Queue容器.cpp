#include<iostream>
using namespace std;
#include<queue>

//Queue容器
class Person
{
public:
	Person(string name, int age)
	{
		this->name = name;
		this->age = age;
	}

	string name;
	int age;
};

void test02()
{
	//先进先出
	queue<Person>q;

	//准备数据
	Person p1("A", 10);
	Person p2("B", 20);
	Person p3("C", 30);
	Person p4("D", 40);

	//入队
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	while (!q.empty())
	{
		//查看队头
		cout << "队头姓名：" << q.front().name << "年龄：" << q.front().age << endl;
		//查看队尾
		cout << "队尾姓名：" << q.back().name << "年龄：" << q.back().age << endl;
		//出队
		q.pop();
	}

	cout << "队列大小为：" << q.size() << endl;
}

int main()
{
	test02();

	system("pause");
	return 0;
}