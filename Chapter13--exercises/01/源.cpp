#include<iostream>
#include"Cd.h"
using namespace std;

void Bravo(const Cd& disk);

int main()
{
	Cd c1("Beatles", "Capitol", 14, 35.5);
	Classic c2 = Classic("Piano Sonata in B flat, Fantasia in C",
		"Alfred Brendel", "Philips", 2, 57.17);
	Cd* pcd = &c1;
	cout << "Using object directly:\n";
	c1.Report();
	c2.Report();
	cout << "---------------------------------\n";

	cout << "Using type cd * pointer to objects:\n";
	pcd->Report();
	pcd = &c2;
	pcd->Report();
	cout << "---------------------------------\n";

	cout << "Calling a function with a Cd reference argument:\n";
	Bravo(c1);
	Bravo(c2);
	cout << "---------------------------------\n";

	cout << "Testing assignment: ";
	Classic Copy;
	Copy = c2;
	Copy.Report();

	return 0;
}

void Bravo(const Cd& disk)
{
	disk.Report();
}
