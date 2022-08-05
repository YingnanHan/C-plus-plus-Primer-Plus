// firstref.cpp -- defining and using a refrence
#include<iostream>

using namespace std;

int main()
{
	int rats = 101;
	int& rodents = rats;
	cout << "rat = " << rats;
	cout << " rodents = " << rodents << endl;
	rodents++;
	cout << "rat = " << rats;
	cout << " rodents = " << rodents << endl;
	cout << "rate address  = " << &rats;
	cout << " rodents address = " << &rodents << endl;

	return 0;
}