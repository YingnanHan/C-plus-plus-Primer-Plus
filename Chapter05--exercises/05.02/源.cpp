#include<iostream>
#include<array>

using namespace std;

int main()
{
	array<long double, 100>arr;
	for (int i = 1; i <= 100; i++)
	{
		arr.at(i - 1) = i;
	}

	long long fact = 1;
	for (auto val = arr.begin(); val < arr.end(); val++)
	{
		fact *= *val;
		//cout << fact;
	}
	cout << fact;
	return 0;
}