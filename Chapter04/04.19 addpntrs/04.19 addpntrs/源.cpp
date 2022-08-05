// addpntrs.cpp -- pointer addition
#include<iostream>

int main()
{
	using namespace std;

	double wages[3] = {10000.0,20000.0,3000.0};
	short stacks[3] = { 3,2,1 };

	//Here are two ways to get the address of an array
	double* pw = wages; // name of an array = address
	short* ps = &stacks[0];// or use address operator
	//with array element
	cout << "pw = " << pw << ", *pw = " << *pw << endl;
	
	pw = pw + 1;
	cout << "add one to the pw pointer:\n";
	cout << "pw = " << pw << ", *pw = " << *pw << endl;
	cout << "ps = " << ps << ", *ps = " << *ps << endl;

	ps = ps + 1;
	cout << "add one to the ps pointer:\n";
	cout << "ps = " << ps << ", *ps = " << *ps << endl;

	cout << "access 2 elements with array notation\n";
	cout << "stacks[0] = " << stacks[0] << " , stacks[1]" << stacks[1] << endl;

	cout << "access 2 elements with pointer notation\n";
	cout << "*stacks = " << *stacks << " , *(stacks+1)" << *(stacks) << endl;

	cout << sizeof(wages) << " = size of wages array\n";
	cout << sizeof(pw) << " = size of pw pointer\n";

	return 0;
}