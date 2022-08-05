// usetime0.cpp -- using the first draft of the Time class
// compile usetime0.cpp and mytime0.cpp together
#include<iostream>
#include"mytime0.h"

int main()
{
	using std::cin;
	using std::cout;

	Time planning;
	Time coding(2, 40);
	Time fixing(5, 55);
	Time total;

	cout << "planning time = ";
	planning.Show();
	cout << std::endl;

	cout << "coding time = ";
	coding.Show();
	cout << std::endl;

	cout << "fixing time = ";
	fixing.Show();
	cout << std::endl;

	total = coding.sum(fixing);
	cout << "coding.sum(fixing) = ";
	total.Show();
	cout << std::endl;

	return 0;
}