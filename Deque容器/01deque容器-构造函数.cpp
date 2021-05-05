#include<iostream>
using namespace std;
#include<deque>

//定义const形参（防止被修改）
void printDeque1(const deque<int>& d)
{
	//需要const迭代器
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//deque容器构造函数
void test01()
{
	deque<int>d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque1(d1);

	deque<int>d2(d1.begin(), d1.end());
	printDeque1(d2);

	deque<int>d3(10, 5);
	printDeque1(d3);

	deque<int>d4(d3);
	printDeque1(d4);
}

int main1()
{
	test01();

	system("pause");
	return 0;
}