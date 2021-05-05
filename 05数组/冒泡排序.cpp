#include <iostream>
using namespace std;

int main3()
{
	//Ã°ÅÝÉýÐò
	int arr[] = { 4,2,8,0,5,7,1,3,9 };
	int num;
	int length = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0;i < length - 1;i++)
	{
		for (int j = 0;j < length - i - 1;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				num = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = num;
			}
		}
	}
	for (int k = 0;k < length;k++)
		cout << arr[k] << " ";
	cout << endl;
	return 0;
}