#include<iostream>
using namespace std;
#include<list>

void printList2(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//list容器赋值和交换
void test02()
{
	list<int>l1;

	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);

	printList2(l1);

	//operator=赋值
	list<int>l2;
	l2 = l1;
	printList2(l2);

	//assign
	list<int>l3;
	l3.assign(l2.begin(), l2.end());
	printList2(l3);

}

int main()
{
	test02();

	return 0;
}