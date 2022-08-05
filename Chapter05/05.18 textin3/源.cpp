// textin3.cpp -- reading chars to end of file
#include<iostream>

using namespace std;

int main()
{
	char ch;
	int count = 0;
	cin.get(ch);
	// if not EOF cin.fail() == false
	while (cin.fail() == false) //test for EOF
	{
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << endl << count << " characters read\n";

	return 0;
}
