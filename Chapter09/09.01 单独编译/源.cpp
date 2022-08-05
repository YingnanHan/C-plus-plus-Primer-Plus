// main.cpp -- exmaple of a 3-file program
#include<iostream>
#include"coordin.h"

using namespace std;

int main()
{
	rect rplace;
	polar pplace;

	cout << "Enter the x and y values:";
	while (cin >> rplace.x >> rplace.y)
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Next 2 numbers (q to quit):";
	}
	cout << "Bye\n";
	return 0;
}