// usestock1.cpp -- using the Stock class
// compile with stock10.cpp
#include<iostream>
#include"stock20.h"

int main()
{
	using std::cout;
	cout << "Uisng constructure to create new objects\n";
	Stock stock1("NanoSmart", 12, 20.0);
	stock1.show();
	Stock stock2 = Stock("Boffo Objects", 2, 2.0);
	stock2.show();

	cout << "Assigning  stock1  to  stock2:\n";
	stock2 = stock1;
	cout << "Listing stock1 and stock2:\n";
	stock1.show();
	stock2.show();

	cout << "Using a constructor to reset an object:\n";
	stock1 = Stock("Niffy Foods", 10, 50.0);
	cout << "Revised stock1:\n";
	stock1.show();
	cout << "Done\n";

	return 0;
}
