#include<iostream>
using namespace std;

//��������
//��ͨд��
class Calculator
{
public:
	int num1;
	int num2;

	int getResult(string oper)
	{	
		if (oper == "+")
		{
			return num1 + num2;
		}
		else if (oper == "-")
		{
			return num1 - num2;
		}
		else if (oper == "*")
		{
			return num1 * num2;
		}
		else if (oper == "/")
		{
			return num1 / num2;
		}
		//��Ҫ��չ�¹��ܣ���Ҫ�޸�Դ��
		//����ԭ�򣺶���չ���ţ����޸Ĺر�
	}
};

//��̬д����������
//1����֯�ṹ����
//2���ɶ���ǿ
//3������ǰ�ںͺ�����չ�Լ�ά���Ը�
//ʵ�ּ�����������
class AbstractCalculator
{
public:
	virtual int getResult() 
	{
		return 0;
	}

	int num1 = 0;
	int num2 = 0;
};

//�ӷ���
class AddCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return num1 + num2;
	}
};

//������
class SubCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return num1 - num2;
	}
};

//�˷���
class MulCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return num1 * num2;
	}
};

//������
class DivCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return num1 / num2;
	}
};

void test02()
{
	//Calculator ca;
	//ca.num1 = 3;
	//ca.num2 = 3;
	//cout << ca.getResult("+") << endl;
	//����ָ�������ָ���������
	AbstractCalculator* ac = new AddCalculator;
	ac->num1 = 3;
	ac->num2 = 3;
	cout << ac->getResult() << endl;
	//������������
	delete ac;

	ac = new SubCalculator;
	ac->num1 = 3;
	ac->num2 = 3;
	cout << ac->getResult() << endl;
	delete ac;

	ac = new MulCalculator;
	ac->num1 = 3;
	ac->num2 = 3;
	cout << ac->getResult() << endl;
	delete ac;

	ac = new DivCalculator;
	ac->num1 = 3;
	ac->num2 = 3;
	cout << ac->getResult() << endl;
	delete ac;
}

int main2()
{
	test02();

	system("pause");
	return 0;
}