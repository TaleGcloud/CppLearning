#include<iostream>
using namespace std;

//�������ʹ�������
class AnimaL
{
public:
	AnimaL()
	{
		cout << "Animal���캯������" << endl;
	}

	//�������������Խ������ָ���ͷ�������������
	//virtual ~AnimaL()
	//{
	//	cout << "Animal������������" << endl;
	//}

	//�������� ��Ҫ����Ҳ��Ҫʵ�֣���������������ʵ�֣�
	virtual ~AnimaL() = 0;

	virtual void speak() = 0;
};

AnimaL::~AnimaL()
{
	cout << "Animal����������������" << endl;
}

class CAT :public AnimaL
{
public:
	CAT(string name)
	{
		cout << "CAT���캯������" << endl;
		this->name = new string(name);
	}

	void speak()
	{
		cout << *name << "��������" << endl;
	}

	~CAT()
	{
		if (name != NULL)
		{
			cout << "CAT������������" << endl;
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
	//����ָ��������ʱ��������������е������������ڴ�й©
	delete animal;
}

int main()
{
	test05();

	system("pause");
	return 0;
}