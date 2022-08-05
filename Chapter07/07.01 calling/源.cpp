// calling.cpp -- defining prototyping , and calling a function
#include<iostream>

using namespace std;

void sample();

int main()
{
	cout << "main() will call the simple() function\n ";
	sample();	// function call

	return 0;
}

void sample()
{
	cout << "I'm but a simple function\n";
}