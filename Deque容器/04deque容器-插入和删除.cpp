#include<iostream>
using namespace std;
#include<deque>

void printDeque4(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//deque���������ɾ��
void test04()
{
	deque<int>d1;

	//β��
	d1.push_back(10);
	d1.push_back(20);

	//ͷ��
	d1.push_front(100);
	d1.push_front(200);

	printDeque4(d1);

	//βɾ
	d1.pop_back();
	printDeque4(d1);

	//ͷɾ
	d1.pop_front();
	printDeque4(d1);
	
	//insert����
	d1.insert(d1.begin(), 500);
	printDeque4(d1);

	d1.insert(d1.end(), 5, 7);
	printDeque4(d1);

	//����������в���
	deque<int>d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);
	d1.insert(d1.begin(), d2.begin(), d2.end());
	printDeque4(d1);

	//ɾ��
	d1.erase(d1.begin());
	printDeque4(d1);
}

int main4()
{
	test04();

	system("pause");
	return 0;
}