#include<iostream>
using namespace std;

//��ģ����̳�
template<class T>
class Base
{
	T m;
};

class Son :public Base<int>
{

};

//���̳�
template<class T1,class T2>
class Son2 :public Base<T2>
{
public:

	Son2()
	{
		cout << "T1������Ϊ��" << typeid(T1).name() << endl;
		cout << "T������Ϊ��" << typeid(T2).name() << endl;
	}

	T1 obj;
};

void test05()
{
	Son2<int, char>S2;
}

int main5()
{
	test05();

	system("pasue");
	return 0;
}