#include<iostream>
using namespace std;
//通讯录最大人数
#define personMaxNumber 10

// 联系人结构体
struct person
{
	string name;	//姓名
	int sex = 0;	//性别
	int age = 0;	//年龄
	string phone;	//手机
	string address;	//地址
};

//通讯录结构体
struct mailList
{
	person personArray[personMaxNumber];
	//通讯录当前人数
	int currentNumber = 0;
};

//显示菜单
void displayMenu()
{
	cout << "**************" << endl;
	cout << " 1、添加联系人" << endl;
	cout << " 2、显示联系人" << endl;
	cout << " 3、删除联系人" << endl;
	cout << " 4、查找联系人" << endl;
	cout << " 5、修改联系人" << endl;
	cout << " 6、清空通讯录" << endl;
	cout << " 0、退出通讯录" << endl;
	cout << "**************" << endl;
}

//添加联系人
void addPerson(mailList* ml)
{
	if (ml->currentNumber < personMaxNumber)
	{
		cout << "请输入要添加联系人的姓名" << endl;
		cin >> ml->personArray[ml->currentNumber].name;
		cout << "请输入要添加联系人的性别" << endl;
		cin >> ml->personArray[ml->currentNumber].sex;
		cout << "请输入要添加联系人的年龄" << endl;
		cin >> ml->personArray[ml->currentNumber].age;
		cout << "请输入要添加联系人的电话号码" << endl;
		cin >> ml->personArray[ml->currentNumber].phone;
		cout << "请输入要添加联系人的地址" << endl;
		cin >> ml->personArray[ml->currentNumber].address;
		ml->currentNumber++;
		cout << "添加成功" << endl;
	}
	else
		cout << "通讯录人数已满，无法继续添加。" << endl;
	system("pause");
}

//显示通讯录
void displayMailList(mailList* ml)
{
	if (ml->currentNumber == 0)
		cout << "当前通讯录为空。" << endl;
	for (int i = 0; i < ml->currentNumber; i++)
	{
		cout << "第" << i + 1 << "位联系人  "
			<< "姓名：" << ml->personArray[i].name << "\t"
			<< "性别：" << ml->personArray[i].sex << "\t"
			<< "年龄：" << ml->personArray[i].age << "\t"
			<< "手机：" << ml->personArray[i].phone << "\t"
			<< "地址：" << ml->personArray[i].address << "\t" << endl;
	}
	system("pause");
}

//检测联系人是否存在
int testContact(mailList* ml, string name)
{
	for (int i = 0; i < ml->currentNumber; i++)
	{
		if (name == ml->personArray[i].name)
			return i;
	}
	return -1;
}

//删除联系人
void deleteContact(mailList* ml)
{
	string name;
	cout << "请输入要删除人的姓名" << endl;
	cin >> name;
	int i = testContact(ml, name);
	if (i >= 0)
	{
		for (; i < ml->currentNumber - 1; i++)
			ml->personArray[i] = ml->personArray[i + 1];
		ml->currentNumber--;
		cout << "删除成功。" << endl;
	}
	else
		cout << "没有此人！" << endl;
	system("pause");
}

//查找联系人
void findContact(mailList* ml)
{
	string name;
	cout << "请输入要查找人的姓名" << endl;
	cin >> name;
	int i = testContact(ml, name);
	if (i >= 0)
	{
		cout << "找到此人。" << endl
			<< "姓名：" << ml->personArray[i].name << "\t"
			<< "性别：" << ml->personArray[i].sex << "\t"
			<< "年龄：" << ml->personArray[i].age << "\t"
			<< "手机：" << ml->personArray[i].phone << "\t"
			<< "地址：" << ml->personArray[i].address << "\t" << endl;
	}
	else
		cout << "没有此人！" << endl;
	system("pause");
}

//修改联系人
void modifyContact(mailList* ml)
{
	string name;
	cout << "请输入要修改人的姓名" << endl;
	cin >> name;
	int i = testContact(ml, name);
	if (i >= 0)
	{
		cout << "请输入要修改联系人的姓名" << endl;
		cin >> ml->personArray[i].name;
		cout << "请输入要修改联系人的性别" << endl;
		cin >> ml->personArray[i].sex;
		cout << "请输入要修改联系人的年龄" << endl;
		cin >> ml->personArray[i].age;
		cout << "请输入要修改联系人的电话号码" << endl;
		cin >> ml->personArray[i].phone;
		cout << "请输入要修改联系人的地址" << endl;
		cin >> ml->personArray[i].address;
		cout << "修改成功。" << endl;
	}
	else
		cout << "没有此人！" << endl;
	system("pause");
}

//清空联系人
void clearContact(mailList* ml)
{
	ml->currentNumber = 0;
	cout << "联系人列表已清空" << endl;
	system("pause");
	system("cls");
}

int main()
{	
	mailList ml;	//创建通讯录结构体变量
	ml.currentNumber = 0;
	int select = 0;	//选择变量
	while (true)
	{
		system("cls");
		displayMenu();
		cin >> select;
		switch (select)
		{
		case 0:	//退出通讯录
			cout << "欢迎下次使用。" << endl;
			system("pause");
			return 0; 
		case 1:	//添加联系人
			addPerson(&ml);
			break;
		case 2:	//显示联系人
			displayMailList(&ml);
			break;
		case 3:	//删除联系人
			deleteContact(&ml);
			break;
		case 4:	//查找联系人
			findContact(&ml);
			break;
		case 5:	//修改联系人
			modifyContact(&ml);
			break;
		case 6:	//清空联系人
			clearContact(&ml);
			break;
		default:	//都不是
			cout << "非法输入！" << endl;
			system("pause");
			break;
		}
	}

	system("pause");
	return 0;
}