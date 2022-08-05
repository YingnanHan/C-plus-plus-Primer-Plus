// and.cpp -- using the logical AND operator
#include<iostream>

using namespace std;

const int ArSize = 6;

int main()
{
	float naaq[ArSize];
	cout << "Enter the NAQs (New Age Awareness Quotients) of \n your neighbors .\
		Program terminiates when you make\n "<<ArSize<<" entries or enter a negative value.\n" << endl;

	int i = 0;
	float temp;
	cout << "First value:";
	cin >> temp;
	while (i < ArSize && temp >= 0)
	{
		naaq[i] = temp;
		++i;
		if (i < ArSize)
		{
			cout << "Next value:";
			cin >> temp;
		}
	}
	if (i == 0)
	{
		cout << "No data -- bye\n";
	}
	else
	{
		cout << "Enter your NAAQ:";
		float you;
		cin >> you;
		int count = 0;
		for (int j = 0; j < i; j++)
		{
			if (naaq[j] > you)
			{
				++count;
			}
		}
		cout << count;
		cout << " of your neighbors have greater awarness of \n the New Age than you do.\n";
	}

	return 0;
}