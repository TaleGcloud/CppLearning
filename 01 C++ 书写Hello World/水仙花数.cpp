#include <iostream>
using namespace std;

int main8()
{
	int number = 100;
	int g, s, b;
	do
	{
		g = number % 10;
		s = (number % 100) / 10;
		b = number / 100;
		if ((g * g * g) + (s * s * s) + (b * b * b) == number)
			cout << number << endl;
		number++;
	} while (number < 1000);
	system("pause");

	return 0;
}