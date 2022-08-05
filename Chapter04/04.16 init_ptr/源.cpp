// init_ptr.cpp -- initilize a pointer
#include<iostream>

using namespace std;

int main()
{
	int higgens = 5;
	int* pt = &higgens;

	cout << "Value of higgens = " << higgens << ";Address of higgens = " << &higgens << endl;
	cout << "Value of *pt = " << *pt << ";Value of pt = " << pt << endl;

	return 0;
}