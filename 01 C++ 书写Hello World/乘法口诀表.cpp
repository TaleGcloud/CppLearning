#include <iostream>
using namespace std;

int main()
{
	for (int i = 1;i <= 9;i++)
	{
		for (int j = 1;j <= i;j++)
		{
			cout << j << "x" << i << "=" << j * i << "\t";
		}
		cout << endl;
	}
	system("pause");

	return 0;
}