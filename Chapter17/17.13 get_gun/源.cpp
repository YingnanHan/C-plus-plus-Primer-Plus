// get_fun.cpp -- using get() and getline()

#include<iostream>

using namespace std;

const int LIM = 255;


int main()
{

	char input[LIM];

	cout << "Enter a string for getline() processing :";
	cin.getline(input, LIM, '#');
	cout << "Here is your input:";
	cout << endl << input << "\n Done with phase 1:\n";

	char ch;
	cin.get(ch);
	cout << "The next input character is " << ch << endl;

	if (ch != '\n')
	{
		cin.ignore(LIM, '\n');
	}
	cout << "Enter a string for get() processing:\n";
	cin.get(input , LIM, '#');
	cout << "Here is your input:" << endl;
	cout << input << endl << "Done with phase 2\n";

	cin.get(ch);
	cout << "The next input character is " << ch << endl;

	return 0;
}