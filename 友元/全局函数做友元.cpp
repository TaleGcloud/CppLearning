#include<iostream>
using namespace std;

class Building
{
	//ȫ�ֺ�������Ԫ
	friend void goodGay(Building& building);

public:
	Building()
	{
		sittingRoom = "����";
		bedRoom = "����";
	}

public:
	string sittingRoom;

private:
	string bedRoom;
};

//ȫ�ֺ���
void goodGay(Building& building)
{
	cout << "���ڷ���" << building.sittingRoom << endl;

	cout << "���ڷ���" << building.bedRoom << endl;
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