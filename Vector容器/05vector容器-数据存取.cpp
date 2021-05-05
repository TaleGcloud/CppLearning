#include<iostream>
using namespace std;
#include<vector>

//vector容器数据存取
void test05()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	//通过[]方式访问数组中的元素
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;

	//通过at方式访问
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;

	//获取第一个元素
	cout << v1.front() << endl;
	//获取最后一个元素
	cout << v1.back() << endl;
}

int main5()
{
	test05();

	system("pause");
	return 0;
}