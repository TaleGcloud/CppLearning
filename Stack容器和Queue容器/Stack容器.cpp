#include<iostream>
using namespace std;
#include<stack>

//Stack容器
void test01()
{
	//先进后出
	stack<int>s;

	//入栈
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	cout << "栈的大小为：" << s.size() << endl;

	while (!s.empty())
	{
		//查看栈顶元素
		cout << s.top() << endl;
		//出栈
		s.pop();
	}

	cout << "栈的大小为：" << s.size() << endl;
}

int main1()
{
	test01();

	system("pause");
	return 0;
}