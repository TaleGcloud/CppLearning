#include<iostream>
using namespace std;

//递增运算符重载
class Myint
{
	friend ostream& operator<<(ostream& cout, Myint myint);

public:
	Myint()
	{
		num = 0;
	}

	//重载前置++运算符
	Myint& operator++()	//返回引用为了一直对一个数据递增操作
	{
		//先进行++运算
		num++;
		//再将自身进行返回
		return *this;
	}

	//重载后置++运算符
	//int代表占位参数，可以用于区分前置和后置递增
	Myint operator++(int)
	{
		//先记录当时结果
		Myint temp = *this;
		//然后递增
		num++;
		//最后返回记录结果
		return temp;
	}

private:
	int num;
};

//重载左移运算符
ostream& operator<<(ostream& cout, Myint myint)
{
	cout << myint.num;
	return cout;
}

void test03()
{
	Myint myint;
	cout << ++myint << endl;
	Myint myint2;
	cout << myint2++ << endl;
}

int main3()
{
	test03();

	system("pause");
	return 0;
}