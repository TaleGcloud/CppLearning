#include<iostream>
using namespace std;

//stringÈÝÆ÷-¸³Öµ²Ù×÷
void test02()
{
	string str1;
	str1 = "hello world";
	cout << str1 << endl;

	string str2;
	str2 = str1;
	cout << str2 << endl;

	string str3;
	str3 = 'a';
	cout << str3 << endl;

	string str4;
	str4.assign("hello");
	cout << str4 << endl;
	
	string str5;
	str5.assign("hello", 3);
	cout << str5 << endl;

	string str6;
	str6.assign(str5);
	cout << str6 << endl;
	
	string str7;
	str7.assign(10, 'a');
	cout << str7 << endl;
}

int main2()
{
	test02();

	system("pause");
	return 0;
}