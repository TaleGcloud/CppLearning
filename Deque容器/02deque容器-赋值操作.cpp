#include<iostream>
using namespace std;
#include<deque>

void printDeque2(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//deque容器赋值操作
void test02()
{
	deque<int>d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque2(d1);

	//operator=赋值
	deque<int>d2 = d1;
	printDeque2(d2);

	//assign赋值
	deque<int>d3;
	d3.assign(d2.begin(), d2.end());
	printDeque2(d3);

	deque<int>d4;
	d4.assign(10, 5);
	printDeque2(d4);
}

int main2()
{
	test02();

	system("pause");
	return 0;
}