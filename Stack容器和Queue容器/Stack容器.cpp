#include<iostream>
using namespace std;
#include<stack>

//Stack����
void test01()
{
	//�Ƚ����
	stack<int>s;

	//��ջ
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	cout << "ջ�Ĵ�СΪ��" << s.size() << endl;

	while (!s.empty())
	{
		//�鿴ջ��Ԫ��
		cout << s.top() << endl;
		//��ջ
		s.pop();
	}

	cout << "ջ�Ĵ�СΪ��" << s.size() << endl;
}

int main1()
{
	test01();

	system("pause");
	return 0;
}