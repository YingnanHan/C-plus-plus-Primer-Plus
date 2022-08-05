#include<iostream>
#include<string>

using namespace std;

int main()
{
	string first_name, last_name;

	cout << "Enter your first name:";
	cin>>first_name;
	cout << endl;
	cout << "Enter your last name:";
	cin>>last_name;
	cout << "Here is the information in a single string:" << last_name << "," << first_name << endl;

	return 0;
}