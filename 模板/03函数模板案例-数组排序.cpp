#include<iostream>
using namespace std;

//实现通用 对数组进行排序的函数
//规则 从小到大
//算法 选择排序
//测试 char 数组、int数组

//排序算法
template<class T>
void mySort(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;
		for (int j = i+1; j < len; j++)
		{
			//遍历的数值 比 认定的最大值 大
			if (arr[j] < arr[max])
			{
				max = j;
			}
		}
		if (max != i)
		{
			T temp = arr[max];
			arr[max] = arr[i];
			arr[i] = temp;
		}
	}
}

void test03()
{
	//测试char数组
	char charArr[] = "dawfudf";
	int num = (sizeof(charArr) - 1) / sizeof(char);
	mySort(charArr, num);
	cout << charArr << endl;

	int intArr[] = { 2,45,534,63,4,7,8,235 };
	num = sizeof(intArr) / sizeof(int);
	mySort(intArr, num);
	for (int i = 0; i < 8; i++)
	{
		cout << intArr[i] << endl;
	}
}

int main3()
{
	test03();

	system("pause");
	return 0;
}