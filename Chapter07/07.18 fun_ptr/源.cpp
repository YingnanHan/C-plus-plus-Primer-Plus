// fun_ptr.cpp -- pointers to functions
#include<iostream>

using namespace std;

double besty(int);
double pam(int);

void estimate(int lines, double (*pf)(int));

int main()
{
	int code;
	cout << "How many lines of codes do you need?" << endl;
	cin >> code;
	cout << "Here's Besty's estimate:\n";
	estimate(code, besty);
	cout << "Here's Pam's estimate:\n";
	estimate(code, pam);

	return 0;
}

double besty(int lns)
{
	return 0.05 * lns;
}

double pam(int lns)
{
	return 0.03 * lns + 0.0004 * lns * lns;
}

void estimate(int lines, double (*pf)(int))
{
	cout << lines << " lines will take ";
	cout << (*pf)(lines) << " hour(s)\n";
}