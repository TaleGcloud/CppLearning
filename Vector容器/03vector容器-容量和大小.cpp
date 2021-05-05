#include<iostream>
using namespace std;
#include<vector>

void printVector3(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//vector容器容量和大小
void test03()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector3(v1);

	if (v1.empty())
	{
		cout << "v1为空" << endl;
	}
	else
	{
		cout << "v1不为空" << endl;
		cout << "v1的容量为" << v1.capacity() << endl;
		cout << "v1的大小为" << v1.size() << endl;
	}

	//重新指定大小，大了默认用0填充位置，重载可以替换默认的0
	v1.resize(15, 100);
	printVector3(v1);

	//小了自动舍弃多余的
	v1.resize(5);
	printVector3(v1);
}

int main3()
{
	test03();

	system("pause");
	return 0;
}