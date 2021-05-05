#include<iostream>
using namespace std;
#include<deque>

void printDeque3(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//deque������С����
void test03()
{
	deque<int>d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque3(d1);

	if (d1.empty())
	{
		cout << "d1Ϊ��" << endl;
	}
	else
	{
		cout << "d1��Ϊ��" << endl;
		cout << "d1�Ĵ�СΪ��" << d1.size() << endl;
		//dequeû����������
	}

	//����ָ����С��Ĭ����0���
	d1.resize(15, 1);
	printDeque3(d1);

	d1.resize(5);
	printDeque3(d1);
}

int main3()
{
	test03();

	system("pause");
	return 0;
}