// morechar.cpp -- the char type and the int type constracted
#include<iostream>

using namespace std;

int main()
{
	char ch = 'M'; //assign ASCII code for M to ch
	int i = ch;    //store same code in an int
	cout << "The ASCII code for " << ch << " is " << i << endl;

	cout << "Add one to the character code:" << endl;
	ch = ch + 1;   //change character code in ch
	i = ch;		   // save new character code in i
	cout << "The ASCII code for " << ch << " is " << i << endl;

	//using the cout.put() member function to siaplay a char
	cout << "Displaying char ch using cout.put(ch):";
	cout.put(ch);

	//using the cout.put() member function to siaplay a char constant
	cout.put('!');

	cout << "Done!" << endl;

	return 0;
}