#include<iostream>
#include "�ṹ������.h"
using namespace std;

//����Ӣ����������
struct Hero
{
	//����
	string name;
	//����
	int age;
	//�Ա�
	string sex;
};

void bubbleSort(Hero heroArray[], int len)
{
	Hero temp;
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (heroArray[j].age > heroArray[j + 1].age)
			{
				temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}
		}
	}
}

void printArray(Hero heroArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << heroArray[i].name << " " << heroArray[i].age << " "
			<< heroArray[i].sex << endl;
	}
}

int main()
{
	Hero heroArray[5] =
	{
		{"liubei",23,"man"},
		{"guanyu",22,"man"},
		{"zhangfei",20,"man"},
		{"zhaoyun",21,"man"},
		{"diaochan",19,"woman"}
	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	bubbleSort(heroArray, len);
	printArray(heroArray, len);

	system("pause");

	return 0;
}