#include<iostream>
using namespace std;

//ʵ��ͨ�� �������������ĺ���
//���� ��С����
//�㷨 ѡ������
//���� char ���顢int����

//�����㷨
template<class T>
void mySort(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;
		for (int j = i+1; j < len; j++)
		{
			//��������ֵ �� �϶������ֵ ��
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
	//����char����
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