#include <iostream>
using namespace std;

int main6()
{
	int A, B, C;
	cout << "请分别输入三只小猪的重量" << endl;
	cout << "A:";
	cin >> A;
	cout << "B:";
	cin >> B;
	cout << "C:";
	cin >> C;
	if (A > B && A > C)
		cout << "A小猪最重。" << endl;
	else if (B > C)
		cout << "B小猪最重。" << endl;
	else
		cout << "C小猪最重。" << endl;
	system("pause");
	return 0;
}