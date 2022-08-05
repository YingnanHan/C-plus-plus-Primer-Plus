#include<iostream>

using namespace std;

double convert(double ly)
{
	return 63240 * ly;
}

int main()
{
	double astronopmicalUnits;
	cin >> astronopmicalUnits;
	cout << convert(astronopmicalUnits) << endl;

	return 0;
}