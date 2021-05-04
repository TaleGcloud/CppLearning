#include<iostream>
using namespace std;

//string字符串比较
void test05()
{
	string str1 = "hello";
	string str2 = "hello";
	//0等于 -1小于 1大于
	cout << str1.compare(str2) << endl;
}

int main5()
{
	test05();

	system("pause");
	return 0;
}