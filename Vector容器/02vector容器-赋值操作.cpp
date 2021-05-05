#include<iostream>
using namespace std;
#include<vector>

void printVector2(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//vector������ֵ����
void test02()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector2(v1);

	//��ֵ operator=
	vector<int>v2 = v1;
	printVector2(v2);

	//assign
	vector<int>v3;
	v3.assign(v1.begin(), v1.end());
	printVector2(v3);

	//n��element��ʽ
	vector<int>v4;
	v4.assign(10, 5);
	printVector2(v4);
}

int main2()
{
	test02();

	system("pause");
	return 0;
}