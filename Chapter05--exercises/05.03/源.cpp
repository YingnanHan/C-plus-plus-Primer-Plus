#include<iostream>

using namespace std;

int main()
{
	int sum = 0;
	int x;
	while (1)
	{
		cin >> x;
		if (x == 0)
		{
			break;
		}
		sum += x;
	}
	cout << sum;
	return 0;
}