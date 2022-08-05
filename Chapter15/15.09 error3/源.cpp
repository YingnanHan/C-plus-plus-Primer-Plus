// error3.cpp -- using an exception
#include<iostream>

using namespace std;

double hmean(double a, double b)
{
	if (a == -b)
	{
		throw "bad hmean() arguments : a = -b not allowed";
	}
	return 2.0 * a * b / (a+b);
}

int main()
{

	double x, y, z;
	cout << "Enter 2 numbers:";
	while (cin >> x >> y)
	{
		try
		{
			z = hmean(x, y);
		}
		catch (const char *s)
		{
			cout << s << endl;
			cout << "Enter a new pair of number";
			continue;
		}
		cout << "Harmonic mean of " << x << " and " << y << " is " << z << std::endl;
		cout << "Enter next set of numbers <q to quit>:";
	}
	cout << "Bye!\n";
	return 0;
}