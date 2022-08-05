// error2.cpp -- returnning an error code
#include<iostream>
#include<cfloat>

using namespace std;

bool hmean(double a, double b, double* ans)
{
	if (a == -b)
	{
		*ans = DBL_MAX;
		return false;
	}
	else
	{
		*ans = 2.0 * a * b / (a + b);
		return true;
	}
}

int main()
{
	double x, y, z;

	cout << "Enter 2 numbers:";
	while (cin >> x >> y)
	{
		if (hmean(x, y, &z))
		{
			cout << "Harmonic mean of " << x << " and " << y << " is " << z << endl;
		}
		else
		{
			cout << "One value should not be the negative of the another - try again:\n";
			cout << "Enter the next set of numbers <q to quit>:";
		}
	}
	std::cout << "Bye!" << endl;

	return 0;
}