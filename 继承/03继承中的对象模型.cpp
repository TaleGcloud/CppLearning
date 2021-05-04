#include<iostream>
using namespace std;

//继承中的对象模型
class Base
{
public:
	int A;

protected:
	int B;

private:
	int C;

};

class Son :public Base
{
public:
	int D;
};

//利用开发人员命令提示工具查看对象模型
//跳转盘符
//跳转文件路径 cd 具体路径下
//查看命名
//cl /d1 reportSingleClassLayout类名 文件名

void test03()
{
	//所有非静态成员属性，都会继承
	//所有私有成员属性，被编译器隐藏了，访问不到，但是被继承了
	cout << sizeof(Son) << endl;
}

int main3()
{
	test03();

	system("pause");
	return 0;
}