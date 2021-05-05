#include <iostream>
using namespace std;

int main1()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << sizeof(arr) << endl;
	cout << "数组中元素的个数：" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << (int)arr << endl;
	cout << (int)&arr[0] << endl;  //&取址符

	system("pause");

	return 0;
}