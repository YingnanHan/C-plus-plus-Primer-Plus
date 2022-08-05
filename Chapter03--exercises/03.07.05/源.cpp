#include<iostream>

using namespace std;

int main()
{
	long long population;
	cout << "Enter the worlds' population:";
	cin >> population;

	long long US;
	cout << "Enter the population of the US:";
	cin >> US;

	cout << "The population of the US is " << double(US) / double(population) * 100 << "% of the world population.";

	return 0;
}