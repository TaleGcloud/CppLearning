#include<iostream>
using namespace std;

//计算器类
//普通写法
class Calculator
{
public:
	int num1;
	int num2;

	int getResult(string oper)
	{	
		if (oper == "+")
		{
			return num1 + num2;
		}
		else if (oper == "-")
		{
			return num1 - num2;
		}
		else if (oper == "*")
		{
			return num1 * num2;
		}
		else if (oper == "/")
		{
			return num1 / num2;
		}
		//若要扩展新功能，需要修改源码
		//开闭原则：对扩展开放，对修改关闭
	}
};

//多态写法计算器类
//1、组织结构清晰
//2、可读性强
//3、对于前期和后期扩展以及维护性高
//实现计算器抽象类
class AbstractCalculator
{
public:
	virtual int getResult() 
	{
		return 0;
	}

	int num1 = 0;
	int num2 = 0;
};

//加法类
class AddCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return num1 + num2;
	}
};

//减法类
class SubCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return num1 - num2;
	}
};

//乘法类
class MulCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return num1 * num2;
	}
};

//除法类
class DivCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return num1 / num2;
	}
};

void test02()
{
	//Calculator ca;
	//ca.num1 = 3;
	//ca.num2 = 3;
	//cout << ca.getResult("+") << endl;
	//父类指针或引用指向子类对象
	AbstractCalculator* ac = new AddCalculator;
	ac->num1 = 3;
	ac->num2 = 3;
	cout << ac->getResult() << endl;
	//堆区用完销毁
	delete ac;

	ac = new SubCalculator;
	ac->num1 = 3;
	ac->num2 = 3;
	cout << ac->getResult() << endl;
	delete ac;

	ac = new MulCalculator;
	ac->num1 = 3;
	ac->num2 = 3;
	cout << ac->getResult() << endl;
	delete ac;

	ac = new DivCalculator;
	ac->num1 = 3;
	ac->num2 = 3;
	cout << ac->getResult() << endl;
	delete ac;
}

int main2()
{
	test02();

	system("pause");
	return 0;
}