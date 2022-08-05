// use_new.cpp -- using the new operator
#include<iostream>

using namespace std;

int main()
{
	int nights = 1001;
	int* pt = new int; // allocate space for a int

	*pt = 1001; // store a value there

	cout << "nights value = ";
	cout << nights << ":location " << &nights << endl;
	cout << "int ";
	cout << " value = " << *pt << ": location = " << pt << endl;

	double* pd = new double; // allocate space for a double
	*pd = 10000001.0; // store a value there

	cout << " double ";
	cout << " value = " << *pd << ":location = " << pd << endl;
	cout << "location of pointer pd: " << &pd << endl;
	cout << "size of pt = " << sizeof pt;
	cout << ": sizeof *pt = " << sizeof(*pt) << endl;
	cout << "size of pd = " << sizeof pd;
	cout << ": sizeof *pd = " << sizeof(*pd) << endl;

	return 0;
}