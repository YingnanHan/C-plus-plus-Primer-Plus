// vegnews.cpp -- using new and delete with classes
// compile with stringbad.cpp

#include<iostream>
#include"strndbad.h"

using namespace std;

void callme1(StringBad&);	// pass by reference
void callme2(StringBad);	// pass by value

int main()
{
	using std::endl;
	{
		cout << "Starting an inner block.\n";
		StringBad headline1("Celery Stalks at Midnight");
		StringBad headline2("Lettuce Prey");
		StringBad sports("Spanish Leaves Bowl for Dollars");
		cout << "headline1:" << headline1 << endl;
		cout << "headline2:" << headline2 << endl;
		cout << "sports:" << sports << endl;
		callme1(headline1);
		cout << "headline1:" << headline1 << endl;
		callme2(headline2);
		cout << "headline2:" << headline2 << endl;
		cout << "Initialize one object to another:\n";
		StringBad knot;
		knot = headline1;
		cout << "knot:" << knot << endl;
		cout << "exiting the block.\n";
	}
	cout << "end of main()\n";
	return 0;
}

void callme1(StringBad& rab)
{
	cout << "String passed by refeerence:\n";
	cout << "     \"" << rab << "\"\n";
}

void callme2(StringBad ab)
{
	cout << "String passed by value:\n";
	cout << "       \"" << ab << "\"\n";
}