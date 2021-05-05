#include<iostream>
using namespace std;
#include<list>

void printList1(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//list�������캯��
void test01()
{
	//����list����
	list<int>l1;

	//�������
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);

	//��������
	printList1(l1);

	//���乹��
	list<int>l2(l1.begin(), l1.end());
	printList1(l2);

	//��������
	list<int>l3(l2);
	printList1(l3);

	//n����
	list<int>l4(4, 5);
	printList1(l4);
}

int main1()
{
	test01();

	return 0;
}