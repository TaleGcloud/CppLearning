#include<iostream>
using namespace std;

//虚析构和纯虚析构
class AnimaL
{
public:
	AnimaL()
	{
		cout << "Animal构造函数调用" << endl;
	}

	//利用虚析构可以解决父类指针释放子类对象的问题
	//virtual ~AnimaL()
	//{
	//	cout << "Animal析构函数调用" << endl;
	//}

	//纯虚析构 需要声明也需要实现（类内声明，类外实现）
	virtual ~AnimaL() = 0;

	virtual void speak() = 0;
};

AnimaL::~AnimaL()
{
	cout << "Animal纯虚析构函数调用" << endl;
}

class CAT :public AnimaL
{
public:
	CAT(string name)
	{
		cout << "CAT构造函数调用" << endl;
		this->name = new string(name);
	}

	void speak()
	{
		cout << *name << "在喵喵叫" << endl;
	}

	~CAT()
	{
		if (name != NULL)
		{
			cout << "CAT析构函数调用" << endl;
			delete name;
			name = NULL;
		}
	}

	string *name;
};

void test05()
{
	AnimaL* animal = new CAT("Tom");
	animal->speak();
	//父类指针在析构时，不会调用子类中的析构函数，内存泄漏
	delete animal;
}

int main()
{
	test05();

	system("pause");
	return 0;
}