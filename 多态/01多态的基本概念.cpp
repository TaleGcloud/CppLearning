#include<iostream>
using namespace std;

//��̬
//��̬��̬����������
//1���м̳й�ϵ
//2��������д�����е��麯��

//��̬��̬ʹ��
//�����ָ�������ָ���������

class Animal
{
public:
	//�麯��
	//�ڲ�Ϊvfptr��virtual function pointer���麯��ָ��
	//ָ���麯����vftable����¼�麯����ַ &Animal::speak
	virtual void speak()
	{
		cout << "����" << endl;
	}
};

class Cat :public Animal
{
public:
	//��д�麯��
	//�����е��麯�����ڲ����滻��������麯����ַ &Cat::speak
	void speak()
	{
		cout << "����" << endl;
	}
};

class Dog :public Animal
{
public:
	//��д
	void speak()
	{
		cout << "����" << endl;
	}
};

//ִ��˵��
//��ַ��󶨣��ڱ���׶�ȷ��������ַ
void doSpeak(Animal& animal)	//Animal& animal -> ����ָ���������
{
	animal.speak();
}

void test01()
{
	Cat cat;
	//C++����������ת��
	//��Ҫ����������ǰ�󶨣������н׶ν��а󶨣���ַ���
	doSpeak(cat);
	Dog dog;
	doSpeak(dog);
}

int main1()
{
	test01();

	system("pause");
	return 0;
}