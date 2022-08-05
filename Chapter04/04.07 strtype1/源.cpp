// strtype1.cpp -- using the C++ string class

#include<iostream>
#include<cstring> //make string class available

using namespace std;

int main()
{
	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panther";

	cout << "Enter the kind of feline:";
	cin >> charr1;
	cout << "Enter another kind of feline:";
	cin >> str1;
	cout << "Here are some felines:\n";
	cout << charr1 << " " << charr2 << " " << str1 << " " << str2 << endl;//use cout for output
	
	cout << "The third letter in " << charr2 << " is " << charr2[2] << endl;
	cout << "The third letter in " << str2 << " is " << str2[2] << endl;//use array notation


	return 0;
}