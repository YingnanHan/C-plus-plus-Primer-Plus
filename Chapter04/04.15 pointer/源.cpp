// pointer.cpp -- our first pointer variables

#include<iostream>

using namespace std;

int main()
{
	int updates = 6;	//declare a variable
	int* p_updates;		//declare a pointer to an int
	p_updates = &updates;// assign address of int to pointer

	// express values 2 ways
	cout << "Values:updates = " << updates;
	cout << ", *p_updates = " << *p_updates << endl;

	// express address 2 ways
	cout << "Address: &updates = " << &updates;
	cout << ",Now updates = " << updates << endl;

	return 0;
}