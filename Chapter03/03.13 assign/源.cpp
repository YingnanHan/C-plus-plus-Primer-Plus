// init.cpp -- type changes on initialization
#include<iostream>

using namespace std;

int main()
{
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tree = 3; // int convert to float
	int guess(3.9832); // double convert into int
	int debt = 7.2E12; // result dosen't defined in C++

	cout << "tree = " << tree << endl;
	cout << "guess = " << guess << endl;
	cout << "debt = " << debt << endl; //C++赋值成一个未定义的值

	return 0;
}