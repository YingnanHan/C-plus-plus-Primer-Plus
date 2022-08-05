// twofile2.cpp -- variable with internal and external linkage
#include<iostream>

extern int tom; // tom defined elsewhere
static int dick = 10; // overrides variable dick
int harry = 200; // external variable definition,no conflict with 2 file1-harry

void remote_access()
{
	using namespace std;
	cout << "remote_access() reports the following address:\n";
	cout << &tom << " = &tom, " << &dick << " = &dick, ";
	cout << &harry << " = &harry\n";
}