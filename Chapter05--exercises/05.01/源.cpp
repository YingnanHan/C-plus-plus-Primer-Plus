#include<iostream>

using namespace std;

int main()
{
	int min, max;
	cin >> min >> max;
	cout << endl << (min + max) * (max - min + 1) / 2;
	return 0;
}