#include<iostream>
using namespace std;

//多态案例二 制作饮品
class AbstractDrinking
{
public:
	//煮水
	virtual void Boil() = 0;

	//冲泡
	virtual void Brew() = 0;

	//倒入杯中
	virtual void PourInCup() = 0;

	//加辅料
	virtual void PutSth() = 0;

	//制作yinp
	void makeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSth();
	}
};

//制作咖啡
class Coffee :public AbstractDrinking
{
public:
	void Boil()
	{
		cout << "煮咖啡水" << endl;
	}
	void Brew()
	{
		cout << "冲泡咖啡" << endl;
	}
	void PourInCup()
	{
		cout << "将咖啡倒入杯中" << endl;
	}
	void PutSth()
	{
		cout << "加糖或牛奶" << endl;
	}
};

//制作茶
class Tea :public AbstractDrinking
{
public:
	void Boil()
	{
		cout << "煮茶水" << endl;
	}
	void Brew()
	{
		cout << "冲泡茶叶" << endl;
	}
	void PourInCup()
	{
		cout << "将茶水倒入杯中" << endl;
	}
	void PutSth()
	{
		cout << "加柠檬" << endl;
	}
};

//制作饮品
void doWork(AbstractDrinking* AD)
{
	AD->makeDrink();
	delete AD;
}

void test04()
{
	doWork(new Coffee);
	cout << "---------------" << endl;
	doWork(new Tea);
}

int main4()
{
	test04();

	system("pause");
	return 0;
}