#include<iostream>
using namespace std;
#include<fstream>

//二进制文件 写文件
class Person
{
public:
	char Name[64];
	int age;
};

void test03()
{
	//1、包含头文件	fstream
	//2、创建流对象
	ofstream ofs;

	//3、指定打开方式
	ofs.open("person.txt", ios::out | ios::binary);

	//4、写文件
	Person p = { "张三",18 };
	ofs.write((const char*)&p, sizeof(Person));

	//5、关闭文件
	ofs.close();
}

int main3()
{
	test03();

	system("pause");
	return 0;
}