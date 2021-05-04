#include<iostream>
using namespace std;

const double Pi = 3.14;

//设计一个圆类，求圆的周长
//圆求周长的公式：
//2*Pi*半径

//class代表设计一个类，类后面紧跟类名称
class Circle
{
	//访问权限:
	//公共
//public:
public:

	//属性:
	//半径
	int circleRadius;
	
	//行为:
	//获取圆的周长
	double circlePerimeter()
	{
		return 2 * Pi * circleRadius;
	}
};

int main1()
{
	//通过圆类，创建具体的圆（对象）
	//实例化（通过一个类创建一个对象）
	Circle c1;
	c1.circleRadius = 10;
	cout << "圆的周长为：" << c1.circlePerimeter() << endl;

	system("pause");
	return 0;
}