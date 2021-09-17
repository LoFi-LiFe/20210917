#include <iostream>

using namespace std;

int main()
{
	int Max = 0;
	cin >> Max;

	for (int i = 0; i < Max; i++)
	{
		for (int j = Max; j > i; j--)
		{
			cout << "*";
		}
		cout << endl;
	}


	for (int i = 0; i < Max; i++)
	{
		for (int j = Max; j > i ; j--)
		{
			cout << " ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}