#include<iostream>
using namespace std;
#include<queue>

//Queue����
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
	//�Ƚ��ȳ�
	queue<Person>q;

	//׼������
	Person p1("A", 10);
	Person p2("B", 20);
	Person p3("C", 30);
	Person p4("D", 40);

	//���
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	while (!q.empty())
	{
		//�鿴��ͷ
		cout << "��ͷ������" << q.front().name << "���䣺" << q.front().age << endl;
		//�鿴��β
		cout << "��β������" << q.back().name << "���䣺" << q.back().age << endl;
		//����
		q.pop();
	}

	cout << "���д�СΪ��" << q.size() << endl;
}

int main()
{
	test02();

	system("pause");
	return 0;
}