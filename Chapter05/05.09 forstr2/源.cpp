//forstr2.cpp -- reversing an array
#include<iostream>
#include<string>

using namespace std;

int main()
{
	cout << "Enter a word:" << endl;
	string word;
	cin >> word;
	//physically modify string object
	char temp;
	int i, j;
	for (j = 0, i = word.size() - 1; j < i; j++, i--)
	{
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}
	cout << word << "\nDone\n";
	return 0;
}