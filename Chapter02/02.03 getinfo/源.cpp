//getinfo.cpp -- input and output
#include<iostream>

int main()
{
	using namespace std;

	int carrots;

	cout << "How many carrots do you have?" << endl;
	cin >> carrots;	//C++ input
	cout << "Here are 2 more. ";
	carrots += 2;
	//the next line concatenates output
	cout << "Now you have " << carrots << " carrots." << endl;
	return 0;
}