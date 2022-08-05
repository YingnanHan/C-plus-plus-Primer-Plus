//support.cpp -- use external variables
//compile with external.cpp

#include<iostream>

extern double warming; //use warming from another file

//function prototypes
void update(double dt);
void local();

using namespace std;

void update(double dt) // modifies flobal variables
{
	extern double warming; // optional redeclaration
	warming += dt; // use global warming
	cout << "Updating global warming to " << warming;
	cout << " degrees.\n";
}

void local() //use local variable
{
	double warming = 0.8;//new variable hides external one
	cout << "Local warming = "<<warming<<" degrees.\n";
	// Access global variables with the scope resolution operator
	cout << "But global warming = " << ::warming << " degrees.\n";
}
