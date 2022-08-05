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
	CandyBar snack = CandyBar{ "Moncha Munch",2.3,12.22 };
	cout << snack.brand << " " << snack.calories << " " << snack.weights << endl;

	return 0;
}