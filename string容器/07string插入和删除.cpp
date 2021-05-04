#include<iostream>
using namespace std;

//string²åÈëºÍÉ¾³ı
void test07()
{
	string str = "hello";
	str.insert(1, "123");
	cout << str << endl;

	str.erase(1, 3);
	cout << str << endl;
}

int main7()
{
	test07();

	system("pause");
	return 0;
}