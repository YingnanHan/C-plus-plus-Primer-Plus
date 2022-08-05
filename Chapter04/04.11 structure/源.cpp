// structur.cpp -- a simple structure
#include<iostream>

using namespace std;

struct inflatable // structure declaration
{
	char name[20];
	float volumn;
	double price;
};

int main()
{
	inflatable guest = {
		"Gloroius Gloria", //name value
		1.88, // volumn value
		29.99 // price value
	}; // guest is a structure variable of type inflatable

	// It's initialized to the indicated values
	inflatable pal = {
		"Audacious Arthur",
		3.12,
		32.99
	}; // pal is a second variable of type inflatable
	//NOTE:some implementations require using static inflatable guest = 
	cout << "Exapnd your guest list with " << guest.name;
	cout << " and " << pal.name << "!\n";
	
	//pal.name is the name member of the palvariable
	cout << "You can have both for $";
	cout << guest.price + pal.price << "!\n";

	return 0;
}