#include<iostream>
using namespace std;

//使用引用交换变量
void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 10;
	int b = 20;
	swap(a, b);
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;

	system("pause");
	return 0;
}