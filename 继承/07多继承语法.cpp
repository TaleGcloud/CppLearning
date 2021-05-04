#include<iostream>
using namespace std;

//多继承语法（实际不建议使用）
class Base1
{
public:
	int A=0;
};

class Base2
{
public:
	int A=1;
};

//多继承
class Son07 :public Base1, public Base2
{
public:
	int A=2;
};

void test07()
{
	Son07 son;
	//继承所有的属性
	cout << sizeof(son) << endl;
	cout << son.A << endl;
	//通过作用域区分同名成员
	cout << son.Base1::A << endl;
	cout << son.Base2::A << endl;
}

int main7()
{
	test07();

	system("pause");
	return 0;
}