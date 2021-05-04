#include<iostream>
using namespace std;

//string×Ö·û´æÈ¡
void test06()
{
	string str = "hello";

	//1¡¢[]
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i];
	}
	cout << endl;

	//2¡¢at
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i);
	}
	cout << endl;
}

int main6()
{
	test06();

	system("pause");
	return 0;
}