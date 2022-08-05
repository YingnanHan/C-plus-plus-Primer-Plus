#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	char first_name[50];
	char last_name[50];

	cout << "Enter your first name:";
	cin.getline(first_name, 50);
	cout << endl;
	cout << "Enter your last name:";
	cin.getline(last_name, 50);
	cout << "Here is the information in a single string:" << last_name << "," << first_name << endl;

	return 0;
}