#include<iostream>
using namespace std;

//�̳��еĶ���ģ��
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

//���ÿ�����Ա������ʾ���߲鿴����ģ��
//��ת�̷�
//��ת�ļ�·�� cd ����·����
//�鿴����
//cl /d1 reportSingleClassLayout���� �ļ���

void test03()
{
	//���зǾ�̬��Ա���ԣ�����̳�
	//����˽�г�Ա���ԣ��������������ˣ����ʲ��������Ǳ��̳���
	cout << sizeof(Son) << endl;
}

int main3()
{
	test03();

	system("pause");
	return 0;
}