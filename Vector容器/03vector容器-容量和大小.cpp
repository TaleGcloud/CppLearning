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

//vector���������ʹ�С
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
		cout << "v1Ϊ��" << endl;
	}
	else
	{
		cout << "v1��Ϊ��" << endl;
		cout << "v1������Ϊ" << v1.capacity() << endl;
		cout << "v1�Ĵ�СΪ" << v1.size() << endl;
	}

	//����ָ����С������Ĭ����0���λ�ã����ؿ����滻Ĭ�ϵ�0
	v1.resize(15, 100);
	printVector3(v1);

	//С���Զ����������
	v1.resize(5);
	printVector3(v1);
}

int main3()
{
	test03();

	system("pause");
	return 0;
}