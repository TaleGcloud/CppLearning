#include<iostream>
using namespace std;

//��������
class Cube
{
private:
	//��
	int c_long = 1;

	//��
	int c_wide = 1;

	//��
	int c_high = 1;

public:
	//�����
	int getArea()
	{
		return 2 * (c_long * c_wide + c_wide * c_high + c_high * c_long);
	}

	//�����
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