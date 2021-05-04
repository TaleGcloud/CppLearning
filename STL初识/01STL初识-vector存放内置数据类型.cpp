#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void myPrint(int val)
{
	cout << val << endl;
}

//vector�������������������
void test01()
{
	//������һ��vector����������
	vector<int> v;

	//�������в�������
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	//ͨ�����������������е�����
	//��ʼ������ ָ�������е�һ��Ԫ��
	//vector<int>::iterator itBegin = v.begin();
	////���������� ָ�����������һ��Ԫ�ص���һ��λ��
	//vector<int>::iterator itEnd = v.end();

	////��һ�ֱ�����ʽ
	//while (itBegin != itEnd)
	//{
	//	cout << *itBegin << endl;
	//	itBegin++;
	//}

	//�ڶ��ֱ�����ʽ
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}

	//�����ֱ�����ʽ ����STL�ṩ�ı����㷨
	//�ص�����
	for_each(v.begin(), v.end(), myPrint);
}

int main1()
{
	test01();

	system("pause");
	return 0;
}