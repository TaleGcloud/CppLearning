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

//deque容器大小操作
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
		cout << "d1为空" << endl;
	}
	else
	{
		cout << "d1不为空" << endl;
		cout << "d1的大小为：" << d1.size() << endl;
		//deque没有容量概念
	}

	//重新指定大小，默认用0填充
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