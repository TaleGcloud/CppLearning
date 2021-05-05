#include<iostream>
using namespace std;
#include<vector>

void printVector4(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//vector容器插入和删除
void test04()
{
	vector<int>v1;
	//尾插
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	//遍历
	printVector4(v1);

	//尾删
	v1.pop_back();
	printVector4(v1);

	//插入（参数是迭代器）
	v1.insert(v1.begin(), 100);
	printVector4(v1);

	v1.insert(v1.begin(), 2, 5);
	printVector4(v1);

	//删除（参数是迭代器）
	v1.erase(v1.begin());
	printVector4(v1);

	//清空clear()
	v1.erase(v1.begin(), v1.end());
	printVector4(v1);

}

int main4()
{
	test04();

	system("pause");
	return 0;
}