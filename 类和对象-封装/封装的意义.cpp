#include<iostream>
using namespace std;

const double Pi = 3.14;

//���һ��Բ�࣬��Բ���ܳ�
//Բ���ܳ��Ĺ�ʽ��
//2*Pi*�뾶

//class�������һ���࣬��������������
class Circle
{
	//����Ȩ��:
	//����
//public:
public:

	//����:
	//�뾶
	int circleRadius;
	
	//��Ϊ:
	//��ȡԲ���ܳ�
	double circlePerimeter()
	{
		return 2 * Pi * circleRadius;
	}
};

int main1()
{
	//ͨ��Բ�࣬���������Բ������
	//ʵ������ͨ��һ���ഴ��һ������
	Circle c1;
	c1.circleRadius = 10;
	cout << "Բ���ܳ�Ϊ��" << c1.circlePerimeter() << endl;

	system("pause");
	return 0;
}