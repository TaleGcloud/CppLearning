#include<iostream>
using namespace std;

//���캯���ķ��༰����
//����
class Person
{
private:
	int age;

public:

	//���캯��
	Person()
	{
		age = 0;
		cout << "Person���캯������" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "Person�вι��캯��" << endl;
	}

	//�������캯��
	Person(const Person& p)
	{
		age = p.age;
	}

	//��������
	~Person()
	{
		cout << "Person������������" << endl;
	}
};

//����
void test01()
{
	//���ŷ�
	Person p1;
	Person p2(10);
	Person p3(p2);

	//��ʾ��
	Person p4 = Person(10);
	Person p5 = Person(p4);
	
	//Person(10);	//�������󣺵�ǰ��ִ�н�����ϵͳ����������������

	//��ʽת����
	Person p6 = 10;
	Person p7 = p6;
}

int main2()
{
	test01();

	system("pause");
	return 0;
}