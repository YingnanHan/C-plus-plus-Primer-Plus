// precise.cpp -- setting the precision
#include<iostream>

using namespace std;

int main()
{
	float price1 = 20.04;
	float price2 = 1.9 + 8.0 / 9.0;

	cout << "\"Furry Friends\" is $" << price1 << "!\n";
	cout << "\"Fiery Friends\" is $" << price2 << "!\n";

	cout.precision(2); // 设置有效数字为2
	cout << "\"Furry Friends\" is $" << price1 << "!\n";
	cout << "\"Fiery Friends\" is $" << price2 << "!\n";

	return 0;
}