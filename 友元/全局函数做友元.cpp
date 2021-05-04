#include<iostream>
using namespace std;

class Building
{
	//全局函数做友元
	friend void goodGay(Building& building);

public:
	Building()
	{
		sittingRoom = "客厅";
		bedRoom = "卧室";
	}

public:
	string sittingRoom;

private:
	string bedRoom;
};

//全局函数
void goodGay(Building& building)
{
	cout << "正在访问" << building.sittingRoom << endl;

	cout << "正在访问" << building.bedRoom << endl;
}

void test01()
{
	Building building;
	goodGay(building);
}

int main1()
{
	test01();

	system("pause");
	return 0;
}