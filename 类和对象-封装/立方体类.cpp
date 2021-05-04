#include<iostream>
using namespace std;

//立方体类
class Cube
{
private:
	//长
	int c_long = 1;

	//宽
	int c_wide = 1;

	//高
	int c_high = 1;

public:
	//面积：
	int getArea()
	{
		return 2 * (c_long * c_wide + c_wide * c_high + c_high * c_long);
	}

	//体积：
	int getVolume()
	{
		return c_long * c_wide * c_high;
	}
};

int main()
{
	system("pause");
	return 0;
}