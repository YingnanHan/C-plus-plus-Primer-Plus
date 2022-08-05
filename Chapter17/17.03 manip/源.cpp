#include<iostream>

using namespace std;

int main()
{

	cout << "Enter an integer:";
	int n;
	cin >> n;

	cout << "n		n*n\n";
	cout << n << "		" << n * n << " (decimal)\n";
	//set to hex mode
	cout << hex;
	cout << n << "		";
	cout << n * n << " (hexadecimal)\n";
	//set to octal mode
	cout << oct << n << "		" << n * n << " (octal)\n";
	//alternative way to call a manipulator
	dec(cout); // µÈ¼ÛÓÚcout<<dec
	cout << n << "		" << n * n << " (decimal)\n";

	return 0;
}