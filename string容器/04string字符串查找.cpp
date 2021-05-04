#include<iostream>
using namespace std;

//字符串查找和替换

//1、查找
void test041()
{
	//find
	string str1 = "abcdef";
	int pos = str1.find("de");
	cout << pos << endl;

	//rfind
	pos = str1.rfind("de");
	cout << pos << endl;
}

//2、替换
void test042()
{
	string str1 = "abcdef";
	//replace(int,int,string)从第几个起替换几个
	str1.replace(1, 3, "123456");
	cout << str1 << endl;
}

int main4()
{
	test041();
	test042();

	system("pause");
	return 0;
}