#include"workerManager.h"

workerManager::workerManager()
{

}

void workerManager::showMenu()
{
	cout << "**************************" << endl;
	cout << "***��ӭʹ��ְ������ϵͳ***" << endl;
	cout << "*****0���˳��������******" << endl;
	cout << "*****1������ְ����Ϣ******" << endl;
	cout << "*****2����ʾְ����Ϣ******" << endl;
	cout << "*****3��ɾ����ְְ��******" << endl;
	cout << "*****4���޸�ְ����Ϣ******" << endl;
	cout << "*****5������ְ����Ϣ******" << endl;
	cout << "*****6�����ձ������******" << endl;
	cout << "*****7������ĵ���Ϣ******" << endl;
	cout << "**************************" << endl;
	cout << endl;
	cout << "����������ѡ��" << endl;
}

void workerManager::exitSystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}

workerManager::~workerManager()
{

}