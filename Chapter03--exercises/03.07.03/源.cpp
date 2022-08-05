#include<iostream>

using namespace std;

int main()
{
	double degree, minute, second;
	
	cout << "Enter a latitude in degrees,minutes,and seconds:" << endl;
	
	cout << "First enter the degrees:" << ends;
	cin >> degree;

	cout << "Second enter the minutes:" << ends;
	cin >> minute;

	cout << "Third enter the second:" << ends;
	cin >> second;

	cout << degree << " degrees," << minute << " minutes," << second << " seconds = " << degree + minute / 60 + second / 3600 << " degrees" << endl;

	return 0;
}