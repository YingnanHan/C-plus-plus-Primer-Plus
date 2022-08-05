// strgback.cpp -- a function that returns a pointer to a char
#include<iostream>

using namespace std;

char* buildstr(char c, int n); // prototype

int main()
{
	int times;
	char ch;

	cout << "Enter a character: ";
	cin >> ch;
	cout << "Enter a integer: ";
	cin >> times;
	char* ps = buildstr(ch, times);
	cout << ps << endl;
	delete[]ps;
	ps = buildstr('+', 20);
	cout << ps << "-DONE-" << ps << endl;
	delete[]ps;
	return 0;
}

// build string made of n c characters
char* buildstr(char c, int n)
{
	char* pstr = new char[n + 1];
	pstr[n] = '\0';
	while (n-- > 0)
	{
		pstr[n] = c;
	}
	return pstr;
}