// showpt.cpp -- setting the precision , showing traliing point
#include<iostream>

using namespace std;

int main()
{
	float price1 = 20.40;
	float price2 = 1.9 + 8.0 / 9.0;

	cout.setf(ios_base::showpoint);
	cout << "\"Furry Friends\" is $" << price1 << "!\n";
	cout << "\"Fiery Friends\" is $" << price2 << "!\n";

	cout.precision(2);
	cout << "\"Furry Friends\" is $" << price1 << "!\n";
	cout << "\"Fiery Friends\" is $" << price2 << "!\n";

	return 0;
}