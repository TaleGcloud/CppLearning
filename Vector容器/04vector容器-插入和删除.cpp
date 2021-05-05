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

//vector���������ɾ��
void test04()
{
	vector<int>v1;
	//β��
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	//����
	printVector4(v1);

	//βɾ
	v1.pop_back();
	printVector4(v1);

	//���루�����ǵ�������
	v1.insert(v1.begin(), 100);
	printVector4(v1);

	v1.insert(v1.begin(), 2, 5);
	printVector4(v1);

	//ɾ���������ǵ�������
	v1.erase(v1.begin());
	printVector4(v1);

	//���clear()
	v1.erase(v1.begin(), v1.end());
	printVector4(v1);

}

int main4()
{
	test04();

	system("pause");
	return 0;
}