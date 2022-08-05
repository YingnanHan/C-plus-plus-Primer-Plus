// funtemp.cpp -- using a funciton template
#include<iostream>

using namespace std;

// function protype declare
template<typename T> // or class
void Swap(T& a, T& b);

int main()
{
	int i = 20;
	int j = 30;
	cout << "i, j = " << i << ", " << j << ".\n";
	cout << "Using compiler-generated int swapper:\n";
	Swap(i, j);
	cout << "Now i, j = " << i << ", " << j << ".\n";

	double a = 20.0;
	double b = 30.0;
	cout << "a, b = " << a << ", " << b << ".\n";
	cout << "Using compiler-generated int swapper:\n";
	Swap(a, b);
	cout << "Now a, b = " << a << ", " << b << ".\n";

	return 0;
}

template<typename T>
void Swap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

