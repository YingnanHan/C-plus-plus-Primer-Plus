// arraynew.cpp -- using the new operator for arrays
#include<iostream>

using namespace std;

int main()
{
	double* p3 = new double[3]; //space for 3 doubles
	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;

	cout << "p3[1] is  " << p3[1] << ".\n";
	p3 = p3 + 1; // increment tge pointer
	cout << "Now p3[0] is " << p3[0] << " and " << "p3[1] is " << p3[1] << "\n.";
	p3 = p3 - 1; // point back to beginning
	delete[] p3; // free the memory
	return 0;
}