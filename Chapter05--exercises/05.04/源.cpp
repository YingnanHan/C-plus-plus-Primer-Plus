#include<iostream>

using namespace std;

double Daphne(int year)
{
	return 100 + 0.1 * year * 100;
}

double Cleo(int year)
{
	double sum = 0;
	sum = 100;
	double profit = 0;
	for (int i = 0; i < year; i++)
	{
		sum = sum + 0.05 * sum;
	}
	return sum;
}

int main()
{
	for (int i = 0;; i++)
	{
		if (Daphne(i) < Cleo(i))
		{
			cout << i;
			break;
		}
	}

	return 0;
}