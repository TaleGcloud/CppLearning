#include<iostream>
using namespace std;

class Building
{
	//������Ԫ
	friend void GoodGay::visit();

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

void test03()
{
	GoodGay goodgay;
	goodgay.visit();
}

int main()
{
	test03();

	system("pause");
	return 0;
}