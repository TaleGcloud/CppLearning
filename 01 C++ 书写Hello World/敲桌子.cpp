#include <iostream>
using namespace std;

int main9()
{
	for (int num = 1;num <= 100;num++)
	{
		if (num / 10 == 7 || num % 10 == 7 || num % 7 == 0)
			cout << "ÇÃ×À×Ó" << endl;
		else
			cout << num << endl;
	}

	system("pause");

	return 0;
}