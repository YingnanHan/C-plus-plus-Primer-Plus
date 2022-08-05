// address.cpp -- using the & operator to find address
#include<iostream>

using namespace std;

int main()
{
	int donuts = 6;
	double cups = 4.5;

	cout << "donuts values = " << donuts;
	cout << " and donuts address = " << &donuts << endl;
	//NOTE: you may need to use unsigned (&donuts)
	//and unsigned (&cups)

	cout << "cups value = " << cups;
	cout << " and cups address = " << &cups << endl;
	return 0;
}