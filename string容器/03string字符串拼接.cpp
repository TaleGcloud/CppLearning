#include<iostream>
using namespace std;

//string字符串拼接
void test03()
{
	string str1 = "芜";
	str1 += "湖";
	cout << str1 << endl;

	//append(string,int,int)从第几位开始数几位
	str1.append("起飞");
	cout << str1 << endl;
}

int main3()
{
	test03();

	system("pause");
	return 0;
}