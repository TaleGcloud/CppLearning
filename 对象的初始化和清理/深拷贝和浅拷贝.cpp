#include<iostream>
using namespace std;

//深拷贝和浅拷贝
class Person
{
public:

	int p_age = 0;
	int* p_height = NULL;

	Person()
	{
		cout << "Person构造函数调用" << endl;
	}

	Person(int age, int height)
	{
		p_age = age;
		p_height = new int(height);	//在堆区中开辟空间
		cout << "Person有参构造函数调用" << endl;
	}

	//出现堆区的指针，需要自己实现深拷贝，防止出现问题
	Person(const Person& p)
	{
		p_age = p.p_age;
		//深拷贝
		p_height = new int(*p.p_height);
	}

	~Person()
	{
		//析构代码，将堆区开辟数据做释放操作
		if (p_height != NULL)
		{
			delete p_height;
			p_height = NULL;
		}
		cout << "Person的析构函数调用" << endl;
	}
};

int main4()
{

	system("pause");
	return 0;
}