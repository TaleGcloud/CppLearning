#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//һԪν��
//����ֵΪbool����һ�������ĺ�������

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

	//���������У���û�д���5������
	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
	if (it == v.end())
	{
		cout << "û���ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ���:" << *it << endl;
	}
}

int main()
{
	test02();

	return 0;
}