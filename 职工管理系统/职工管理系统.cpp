#include<iostream>
using namespace std;
#include"workerManager.h"
#include"worker.h"
#include"employee.h"

//ְ������ϵͳ

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
		case 0:	//�˳�
			wm.exitSystem();
			break;
		case 1:	//����
			break;
		case 2:	//��ʾ
			break;
		case 3:	//ɾ��
			break;
		case 4:	//�޸�
			break;
		case 5:	//����
			break;
		case 6:	//����
			break;
		case 7:	//���
			break;
		default:
			break;
		}
		system("cls");
	}
	

	system("pause");
	return 0;
}