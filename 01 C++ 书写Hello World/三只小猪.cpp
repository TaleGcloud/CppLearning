#include <iostream>
using namespace std;

int main6()
{
	int A, B, C;
	cout << "��ֱ�������ֻС�������" << endl;
	cout << "A:";
	cin >> A;
	cout << "B:";
	cin >> B;
	cout << "C:";
	cin >> C;
	if (A > B && A > C)
		cout << "AС�����ء�" << endl;
	else if (B > C)
		cout << "BС�����ء�" << endl;
	else
		cout << "CС�����ء�" << endl;
	system("pause");
	return 0;
}