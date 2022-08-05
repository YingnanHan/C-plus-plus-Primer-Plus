// instr2.cpp -- reading more than one string with getline

#include<iostream>

using namespace std;

int main()
{
	const int ArSize = 20;
	string name;
	string dessert;

	cout << "Enter your name:\n";
	cin >> name;
	cout << "Enter your favorate dessert:\n";
	cin >> dessert;
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";

	return 0;
}