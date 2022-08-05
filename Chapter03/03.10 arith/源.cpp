// arith.cpp -- some C++ artithmetic
#include<iostream>

using namespace std;

int main()
{
	float hats, heads;

	cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point
	cout << "Enter a number:";
	cin >> hats;

	cout << "hats = " << hats << "; heads = " << heads << endl;
	cout << "hats + heads = " << hats + heads << endl;
	cout << "hats - heads = " << hats - heads << endl;
	cout << "hats * heads = " << hats * heads << endl;
	cout << "hats / heads = " << hats / heads << endl;

	return 0;
}