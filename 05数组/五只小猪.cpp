#include <iostream>
using namespace std;

int main2()
{
	//五只小猪找最重的体重
	int arr[5] = { 300,350,200,400,250 };
	int max = arr[0];
	for (int i = 1;i < 5;i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	cout << max << endl;

	//数组逆置
	int arr2[] = { 1,2,3,4,5,6,7 };
	int c = 0;
	int length = sizeof(arr2) / sizeof(arr2[0]);
	for (int i = 0;i < length / 2;i++)
	{
		c = arr2[i];
		arr2[i] = arr2[length - 1 - i];
		arr2[length - 1 - i] = c;
	}
	for (int i = 0;i < length;i++)
	{
		cout << arr2[i] << " ";
	}
	cout << endl;

	system("pause");

	return 0;
}