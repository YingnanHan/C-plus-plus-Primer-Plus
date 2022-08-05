// arrayone.cpp -- small arrays of integers
#include<iostream>

using namespace std;

int main()
{
	int yams[3]; //creates array with three elements
	yams[0] = 7; //assign value to first elements
	yams[1] = 8;
	yams[2] = 6;

	int yamcosts[3] = { 20,30,5 }; //create initial array

	// Notes: If your C++ compiler ot tranlator can't initialize
	// this array,use static int yamcosts[3] instead of
	// int yamcosts[3]

	cout << "Total yams = ";
	cout << yams[0] + yams[1] + yams[2] << endl;
	cout << "The package with " << yams[1] << " yams costs " << yamcosts[1] << " cent per yam" << endl;

	int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1] + yams[2] * yamcosts[2];
	cout << "The total yam expense is " << total << " cents.\n";

	cout << "\nSize of yams array = " << sizeof yams << " bytes.\n";
	cout << "Size of one element = " << sizeof yams[0] << " bytes.\n";

	return 0;
}