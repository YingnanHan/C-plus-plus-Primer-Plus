// rvref.cpp -- simple uses of value references
#include<iostream>

using namespace std;

inline double f(double rf)
{
	return 5.0 * (rf-32.0)/9.0;
}

int main()
{
	double tc = 21.5;
	double&& rd1 = 7.07;
	double&& rd2 = 1.8 * tc + 32.0;
	double&& rd3 = f(rd2);

	cout << " tc value and address:" << tc << ", " << &tc << endl;
	cout << "rd1 value and address:" << rd1 << ", " << &rd1 << endl;
	cout << "rd2 value and address:" << rd2 << ", " << &rd2 << endl;
	cout << "rd3 value and address:" << rd3 << ", " << &rd3 << endl;
	cin.get();

	return 0;
}