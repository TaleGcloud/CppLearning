#include<iostream>
using namespace std;
#include<vector>

//vector����Ԥ���ռ�
void test07()
{
	vector<int>v;

	//����reserveԤ���ռ�
	v.reserve(100000);

	//ͳ�ƿ��ٿռ����
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