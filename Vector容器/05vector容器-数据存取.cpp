#include<iostream>
using namespace std;
#include<vector>

//vector�������ݴ�ȡ
void test05()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	//ͨ��[]��ʽ���������е�Ԫ��
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;

	//ͨ��at��ʽ����
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;

	//��ȡ��һ��Ԫ��
	cout << v1.front() << endl;
	//��ȡ���һ��Ԫ��
	cout << v1.back() << endl;
}

int main5()
{
	test05();

	system("pause");
	return 0;
}