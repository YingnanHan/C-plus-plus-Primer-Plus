
#include<iostream>
#include<string>

using namespace std;

struct CandyBar
{
	string brand;
	double weights;
	double calories;
};

int main()
{
	CandyBar* snack = new CandyBar[3]{
		{ "Moncha Minch",2.3,12.22 } ,
		{"Moncha Munch",2.4,12.23},
		{"Moncha Manch",2.5,12.24}
	};
	cout << snack[0].brand << " " << snack[0].calories << " " << snack[0].weights << endl;
	cout << snack[1].brand << " " << snack[1].calories << " " << snack[1].weights << endl;
	cout << snack[2].brand << " " << snack[2].calories << " " << snack[2].weights << endl;

	return 0;
}