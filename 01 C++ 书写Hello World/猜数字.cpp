#include <iostream>
using namespace std;

int main7()
{
	//�����������ӣ�����ϵͳʱ�����������
	srand((unsigned int)time(NULL));
	//���������
	int number = rand() % 100 + 1;    //����1-100�������
	int value = 0;
	while (value != number)
	{
		cout << "������һ������" << endl;
		cin >> value;
		if (value < number)
			cout << "С��" << endl;
		if (value > number)
			cout << "����" << endl;
		if (value == number)
			cout << "�¶��ˣ���Ϸ����" << endl;
	}
	/*cout << "������һ��1-100������" << endl;
	int number;
	cin >> number;*/

	system("pause");

	return 0;
}