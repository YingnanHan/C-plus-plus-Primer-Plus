//condit.cpp -- using the considtional operator
#include<iostream>

using namespace std;

int main()
{
	int a, b;
	cout << "Enter 2 integers:";
	cin >> a >> b;
	cout << "The larger of " << a << " and " << b;
	int c = a > b ? a : b;
	cout << " is " << c << endl;

	return 0;
}