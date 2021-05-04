#include<iostream>
using namespace std;
#include"workerManager.h"
#include"worker.h"
#include"employee.h"

//职工管理系统

int main()
{
	int choice = 0;
	workerManager wm;
	while (true)
	{
		wm.showMenu();
		cin >> choice;

		switch (choice)
		{
		case 0:	//退出
			wm.exitSystem();
			break;
		case 1:	//增加
			break;
		case 2:	//显示
			break;
		case 3:	//删除
			break;
		case 4:	//修改
			break;
		case 5:	//查找
			break;
		case 6:	//排序
			break;
		case 7:	//清空
			break;
		default:
			break;
		}
		system("cls");
	}
	

	system("pause");
	return 0;
}