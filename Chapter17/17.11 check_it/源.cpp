//check_it.cpp -- cheking for valid input
#include<iostream>

using namespace std;

int main()
{
	cout << "Enter the numbers:";
	int sum = 0;
	int input;
	while (cin >> input)
	{
		sum += input;
	}
	cout << "Last value entered = " << input << endl;
	cout << "Sum = " << sum << endl;
	return 0;
}