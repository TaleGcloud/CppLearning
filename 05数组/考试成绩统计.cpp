#include <iostream>
using namespace std;

int main()
{
	int scores[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	for (int i = 0;i < 3;i++)
	{
		cout << scores[i][0] + scores[i][1] + scores[i][2] << endl;
	}

	system("pause");

	return 0;
}