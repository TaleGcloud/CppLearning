#include<iostream>
using namespace std;
//ͨѶ¼�������
#define personMaxNumber 10

// ��ϵ�˽ṹ��
struct person
{
	string name;	//����
	int sex = 0;	//�Ա�
	int age = 0;	//����
	string phone;	//�ֻ�
	string address;	//��ַ
};

//ͨѶ¼�ṹ��
struct mailList
{
	person personArray[personMaxNumber];
	//ͨѶ¼��ǰ����
	int currentNumber = 0;
};

//��ʾ�˵�
void displayMenu()
{
	cout << "**************" << endl;
	cout << " 1�������ϵ��" << endl;
	cout << " 2����ʾ��ϵ��" << endl;
	cout << " 3��ɾ����ϵ��" << endl;
	cout << " 4��������ϵ��" << endl;
	cout << " 5���޸���ϵ��" << endl;
	cout << " 6�����ͨѶ¼" << endl;
	cout << " 0���˳�ͨѶ¼" << endl;
	cout << "**************" << endl;
}

//�����ϵ��
void addPerson(mailList* ml)
{
	if (ml->currentNumber < personMaxNumber)
	{
		cout << "������Ҫ�����ϵ�˵�����" << endl;
		cin >> ml->personArray[ml->currentNumber].name;
		cout << "������Ҫ�����ϵ�˵��Ա�" << endl;
		cin >> ml->personArray[ml->currentNumber].sex;
		cout << "������Ҫ�����ϵ�˵�����" << endl;
		cin >> ml->personArray[ml->currentNumber].age;
		cout << "������Ҫ�����ϵ�˵ĵ绰����" << endl;
		cin >> ml->personArray[ml->currentNumber].phone;
		cout << "������Ҫ�����ϵ�˵ĵ�ַ" << endl;
		cin >> ml->personArray[ml->currentNumber].address;
		ml->currentNumber++;
		cout << "��ӳɹ�" << endl;
	}
	else
		cout << "ͨѶ¼�����������޷�������ӡ�" << endl;
	system("pause");
}

//��ʾͨѶ¼
void displayMailList(mailList* ml)
{
	if (ml->currentNumber == 0)
		cout << "��ǰͨѶ¼Ϊ�ա�" << endl;
	for (int i = 0; i < ml->currentNumber; i++)
	{
		cout << "��" << i + 1 << "λ��ϵ��  "
			<< "������" << ml->personArray[i].name << "\t"
			<< "�Ա�" << ml->personArray[i].sex << "\t"
			<< "���䣺" << ml->personArray[i].age << "\t"
			<< "�ֻ���" << ml->personArray[i].phone << "\t"
			<< "��ַ��" << ml->personArray[i].address << "\t" << endl;
	}
	system("pause");
}

//�����ϵ���Ƿ����
int testContact(mailList* ml, string name)
{
	for (int i = 0; i < ml->currentNumber; i++)
	{
		if (name == ml->personArray[i].name)
			return i;
	}
	return -1;
}

//ɾ����ϵ��
void deleteContact(mailList* ml)
{
	string name;
	cout << "������Ҫɾ���˵�����" << endl;
	cin >> name;
	int i = testContact(ml, name);
	if (i >= 0)
	{
		for (; i < ml->currentNumber - 1; i++)
			ml->personArray[i] = ml->personArray[i + 1];
		ml->currentNumber--;
		cout << "ɾ���ɹ���" << endl;
	}
	else
		cout << "û�д��ˣ�" << endl;
	system("pause");
}

//������ϵ��
void findContact(mailList* ml)
{
	string name;
	cout << "������Ҫ�����˵�����" << endl;
	cin >> name;
	int i = testContact(ml, name);
	if (i >= 0)
	{
		cout << "�ҵ����ˡ�" << endl
			<< "������" << ml->personArray[i].name << "\t"
			<< "�Ա�" << ml->personArray[i].sex << "\t"
			<< "���䣺" << ml->personArray[i].age << "\t"
			<< "�ֻ���" << ml->personArray[i].phone << "\t"
			<< "��ַ��" << ml->personArray[i].address << "\t" << endl;
	}
	else
		cout << "û�д��ˣ�" << endl;
	system("pause");
}

//�޸���ϵ��
void modifyContact(mailList* ml)
{
	string name;
	cout << "������Ҫ�޸��˵�����" << endl;
	cin >> name;
	int i = testContact(ml, name);
	if (i >= 0)
	{
		cout << "������Ҫ�޸���ϵ�˵�����" << endl;
		cin >> ml->personArray[i].name;
		cout << "������Ҫ�޸���ϵ�˵��Ա�" << endl;
		cin >> ml->personArray[i].sex;
		cout << "������Ҫ�޸���ϵ�˵�����" << endl;
		cin >> ml->personArray[i].age;
		cout << "������Ҫ�޸���ϵ�˵ĵ绰����" << endl;
		cin >> ml->personArray[i].phone;
		cout << "������Ҫ�޸���ϵ�˵ĵ�ַ" << endl;
		cin >> ml->personArray[i].address;
		cout << "�޸ĳɹ���" << endl;
	}
	else
		cout << "û�д��ˣ�" << endl;
	system("pause");
}

//�����ϵ��
void clearContact(mailList* ml)
{
	ml->currentNumber = 0;
	cout << "��ϵ���б������" << endl;
	system("pause");
	system("cls");
}

int main()
{	
	mailList ml;	//����ͨѶ¼�ṹ�����
	ml.currentNumber = 0;
	int select = 0;	//ѡ�����
	while (true)
	{
		system("cls");
		displayMenu();
		cin >> select;
		switch (select)
		{
		case 0:	//�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ�á�" << endl;
			system("pause");
			return 0; 
		case 1:	//�����ϵ��
			addPerson(&ml);
			break;
		case 2:	//��ʾ��ϵ��
			displayMailList(&ml);
			break;
		case 3:	//ɾ����ϵ��
			deleteContact(&ml);
			break;
		case 4:	//������ϵ��
			findContact(&ml);
			break;
		case 5:	//�޸���ϵ��
			modifyContact(&ml);
			break;
		case 6:	//�����ϵ��
			clearContact(&ml);
			break;
		default:	//������
			cout << "�Ƿ����룡" << endl;
			system("pause");
			break;
		}
	}

	system("pause");
	return 0;
}