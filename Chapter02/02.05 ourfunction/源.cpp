// ourfunc.cpp -- defining your own function
#include<iostream>

void simon(int); // function prototype for simon

int main()
{
	using namespace std;
	simon(3);
	cout << "Pick an integer:";
	int count;
	cin >> count;
	simon(count);
	cout << "Done!" << endl;
	return 0;
}

void simon(int n)
{
	using namespace std;
	cout << "Simon says touch your toes " << n << " times." << endl;
	//void function don't return statements
}