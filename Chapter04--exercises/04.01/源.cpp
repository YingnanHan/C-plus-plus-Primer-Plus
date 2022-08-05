#include<iostream>
#include<string>

using namespace std;

int main()
{
	char first_name[100], last_name[100], grade[100];
	int age;

	cout << "What's your first name?" << ends;
	cin.getline(first_name,100);
	cout << "What's your last name?" << ends;
	cin >> last_name;
	cout << "What letter grade do you deserve?" << ends;
	cin >> grade;
	cout << "What's your age?" << ends;
	cin >> age;
	cout << "Name:" << last_name<<" " << first_name << endl;
	cout << "Grade:" << grade << endl;
	cout << "Age:" << age << endl;

	return 0;
}