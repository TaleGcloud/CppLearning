#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//���ñ����㷨for_each

//�º���
void print01(int val)
{
	cout << val << " ";
}

//�º���
class Print
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	for_each(v.begin(), v.end(), print01);
	cout << endl;

	for_each(v.begin(), v.end(), Print());
}

int main()
{
	test01();

	return 0;
}