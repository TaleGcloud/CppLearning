#include<iostream>
using namespace std;

class Building
{
	//������Ԫ
	friend class GoodGay;

public:
	Building()
	{
		sittingRoom = "����";
		bedRoom = "����";
	}

	string sittingRoom;

private:
	string bedRoom;

};

class GoodGay
{
public:
	GoodGay()
	{
		building = new Building;
	}

	void visit()	//�ιۺ���������Building�е�����
	{
		cout << "���ڷ���" << building->sittingRoom << endl;

		cout << "���ڷ���" << building->bedRoom << endl;
	}

	Building* building;
};

void test02()
{
	GoodGay goodGay;
	goodGay.visit();
}

int main2()
{
	test02();

	system("pause");
	return 0;
}