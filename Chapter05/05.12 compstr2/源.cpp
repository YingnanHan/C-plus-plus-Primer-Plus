//compstr2.cpp -- comparing strings using arrays
#include<iostream>
#include<string>

using namespace std;

int main()
{
	string word = "?ate";
	for (char ch = 'a'; word != "mate"; ch++)
	{
		cout << word << endl;
		word[0] = ch;
	}
	cout << "after loop ends,word is " << word << endl;

	return 0;
}