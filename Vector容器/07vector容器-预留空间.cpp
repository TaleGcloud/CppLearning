#include<iostream>
using namespace std;
#include<vector>

//vector容器预留空间
void test07()
{
	vector<int>v;

	//利用reserve预留空间
	v.reserve(100000);

	//统计开辟空间次数
	int num = 0;
	int* p = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}
	cout << num << endl;

}

int main7()
{
	test07();

	system("pause");
	return 0;
}