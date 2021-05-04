#include<iostream>
using namespace std;

//string×Ó´®
void test081()
{
	string str1 = "abcdefgh";
	string str2 = str1.substr(3, 3);
	cout << str2 << endl;
}

void test082()
{
	string eamil = "zhangsan@qq.com";
	cout << eamil.substr(0, eamil.find("@")) << endl;
}

int main()
{
	test081();
	test082();

	system("pause");
	return 0;
}