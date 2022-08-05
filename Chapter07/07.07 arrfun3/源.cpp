// arrfun3.cpp -- array functions and const
#include<iostream>

using namespace std;

const int Max = 5;

int fill_array(double ar[], int limit);
void revalues(double r, double ar[], int n);
void show_array(const double ar[], int n);

int main()
{
	double properties[Max];

	int size = fill_array(properties, Max);
	show_array(properties, size);
	if (size > 0)
	{
		cout << "Enter revaluation factor:";
		double factor;
		while (!(cin >> factor)) // bad input
		{
			cin.clear();
			while (cin.get() != '\n')
			{
				continue;
			}
			cout << "Bad input; Please enter a number:";
		}
		revalues(factor, properties, size);
		show_array(properties, size);
	}
	cout << "Done.\n";
	cin.get();
	cin.get();
	return 0;

	return 0;
}

int fill_array(double ar[], int limit)
{
	double temp;
	int i;
	for (i = 0; i < limit; i++)
	{
		cout << "Enter value #" << (i + 1) << ": ";
		cin >> temp;
		if (!cin) // bad input
		{
			cin.clear();
			while (cin.get() != '\n')
			{
				continue;
			}
			cout << "bad inputl input process terminated.\n";
			break;
		}
		else if (temp < 0)
		{
			break;
		}
		ar[i] = temp;
	}
	return i;
}

void show_array(const double ar[], int n)
{
	using  namespace std;
	for (int i = 0; i < n; i++)
	{
		cout << "Property #" << (i + 1) << ":$";
		cout << ar[i] << endl;
	}
}

void revalues(double r, double ar[], int n)
{
	for(int i = 0; i < n; i++)
	{
		ar[i] *= r;
	}
}