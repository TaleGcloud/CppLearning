#include<iostream>
using namespace std;
#include<deque>
#include<algorithm>	//标准算法头文件

void printDeque6(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//deque容器排序操作
void test06()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_back(30);
	d1.push_front(100);
	d1.push_front(200);
	d1.push_front(300);
	printDeque6(d1);

	sort(d1.begin(), d1.end());
	printDeque6(d1);
}

int main()
{
	test06();

	system("pause");
	return 0;
}