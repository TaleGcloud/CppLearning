#include<iostream>
using namespace std;

class Building
{
	//类做友元
	friend void GoodGay::visit();

public:
	Building()
	{
		sittingRoom = "客厅";
		bedRoom = "卧室";
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

	void visit()	//参观函数，访问Building中的属性
	{
		cout << "正在访问" << building->sittingRoom << endl;

		cout << "正在访问" << building->bedRoom << endl;
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