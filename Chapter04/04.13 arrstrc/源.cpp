// arrstruc.cpp -- an array of structures
#include<iostream>

struct inflatable
{
	char name[20];
	float volumn;
	double price;
};

int main()
{
	using namespace std;
	inflatable guests[2] = {
		{"Bambi",0.5,21.99},
		{"Godzilla",2000,565.99}
	};

	cout << "The guests:" << guests[0].name << " and " << guests[1].name << "\n have a combined volume of " << guests[0].volumn + guests[1].volumn << " cubic feet.\n";

	return 0;
}