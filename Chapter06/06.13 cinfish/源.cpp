// cinfish.cpp -- non-numeric input terminates loop

#include<iostream>

using namespace std;

const int Max = 5;

int main()
{
	double fish[Max];
	cout << "Please input the weights of your fish:\n";
	cout << "You may enter up to " << Max << " fish < q to terminate>:" << endl;
	cout << "fish #1:";
	int i = 0;
	while (i<Max && cin >> fish[i])
	{
		if (++i < Max)
		{
			cout << "fish #" << i + 1 << endl;
		}
	}
	// calculate the average
	double total = 0.0;
	for (int j = 0; j < i; j++)
	{
		total += fish[j];
	}
	// report results
	if (i == 0)
	{
		cout << "No fish\n";
	}
	else
	{
		cout << total / i << " = average weights of " << i << " fish" << endl;
	}
	cout << "Done!!";

	return 0;
}