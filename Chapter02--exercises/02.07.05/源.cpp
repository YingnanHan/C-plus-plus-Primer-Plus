#include<iostream>

using namespace std;

int CentigradeToFarenheit(int x)
{
	return x * 1.8 + 32.0;
}

int main()
{
	int c;
	cin >> c;
	cout << CentigradeToFarenheit(c) << endl;
	return 0;
}