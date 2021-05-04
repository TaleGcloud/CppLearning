#include<iostream>
using namespace std;

//��̬������ ������Ʒ
class AbstractDrinking
{
public:
	//��ˮ
	virtual void Boil() = 0;

	//����
	virtual void Brew() = 0;

	//���뱭��
	virtual void PourInCup() = 0;

	//�Ӹ���
	virtual void PutSth() = 0;

	//����yinp
	void makeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSth();
	}
};

//��������
class Coffee :public AbstractDrinking
{
public:
	void Boil()
	{
		cout << "�󿧷�ˮ" << endl;
	}
	void Brew()
	{
		cout << "���ݿ���" << endl;
	}
	void PourInCup()
	{
		cout << "�����ȵ��뱭��" << endl;
	}
	void PutSth()
	{
		cout << "���ǻ�ţ��" << endl;
	}
};

//������
class Tea :public AbstractDrinking
{
public:
	void Boil()
	{
		cout << "���ˮ" << endl;
	}
	void Brew()
	{
		cout << "���ݲ�Ҷ" << endl;
	}
	void PourInCup()
	{
		cout << "����ˮ���뱭��" << endl;
	}
	void PutSth()
	{
		cout << "������" << endl;
	}
};

//������Ʒ
void doWork(AbstractDrinking* AD)
{
	AD->makeDrink();
	delete AD;
}

void test04()
{
	doWork(new Coffee);
	cout << "---------------" << endl;
	doWork(new Tea);
}

int main4()
{
	test04();

	system("pause");
	return 0;
}