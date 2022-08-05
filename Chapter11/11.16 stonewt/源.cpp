// stone.cpp -- user-defined consversions
// compile with stonewt.cpp

#include<iostream>
#include"stonewt.h"

using namespace std;

void display(const Stonewt& st, int n);

int main()
{
	Stonewt incognito = 275;
	Stonewt wolfe(285, 7);
	Stonewt taft(21, 8);

	cout << "The celebrity weighted:";
	incognito.show_stn();
	cout << "The detective weighted:";
	wolfe.show_stn();
	cout << "Prisident weighted:";
	taft.show_lbs();
	incognito = 276.8;
	taft = 325;
	cout << "After dinner, the celebnrity weighted:";
	incognito.show_stn();
	cout << "After dinner, the prisident weighted:";
	taft.show_lbs();
	display(taft, 2);
	cout << "The wrestler weighted even more.\n";
	display(422, 2);
	cout << "No stone left unearned\n";


	return 0;
}

void display(const Stonewt& st, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Wow! ";
		st.show_stn();
	}
}