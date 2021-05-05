#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//一元谓词
//返回值为bool，有一个参数的函数对象

class GreaterFive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};

void test02()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//查找容器中，有没有大于5的数字
	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
	if (it == v.end())
	{
		cout << "没有找到" << endl;
	}
	else
	{
		cout << "找到了:" << *it << endl;
	}
}

int main()
{
	test02();

	return 0;
}