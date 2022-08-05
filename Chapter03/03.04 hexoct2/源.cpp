#include<iostream>

using namespace std;

int main()
{
	int chest = 42;	// decimal integer literal
	int waist = 42; // hexdecimal integer literal
	int inseam = 42; // octal integer literal

	cout << "Monsieur cuts a striking figure!\n";
	cout << "chest = " << chest << " (42 in decimal)\n";
	cout << hex;// manipulator for changing number base
	cout << "waist = " << waist << " (0x42 in hexdecimal)\n";
	cout << oct;//manipulator for changing number base
	cout << "inseam = " << inseam << " (042 in octal)\n";

	return 0;
}