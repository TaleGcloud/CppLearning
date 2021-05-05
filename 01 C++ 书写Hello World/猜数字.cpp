#include <iostream>
using namespace std;

int main7()
{
	//添加随机数种子，利用系统时间生成随机数
	srand((unsigned int)time(NULL));
	//生成随机数
	int number = rand() % 100 + 1;    //生成1-100的随机数
	int value = 0;
	while (value != number)
	{
		cout << "请输入一个数字" << endl;
		cin >> value;
		if (value < number)
			cout << "小了" << endl;
		if (value > number)
			cout << "大了" << endl;
		if (value == number)
			cout << "猜对了，游戏结束" << endl;
	}
	/*cout << "请输入一个1-100的数字" << endl;
	int number;
	cin >> number;*/

	system("pause");

	return 0;
}