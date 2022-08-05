#include<iostream>

using namespace std;

void func(int hour, int minutes)
{
	cout << hour << ":" << minutes;
	return;
}

int main()
{
	int minutes, hour;
	cout << "Enter the numbers of hours:";
	cin >> hour;
	cout << endl;
	cout << "Enter the numbers of minutes:";
	cin >> minutes;
	cout << endl;
	func(hour,minutes);
	return 0;
}