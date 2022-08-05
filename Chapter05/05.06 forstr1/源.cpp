#include<iostream>
#include<string>

using namespace std;

int main()
{
	cout << "Enter a word:";
	string word;
	cin >> word;

	// display the letter in reverse order
	for (int i = word.size() - 1; i >= 0; i--)
	{
		cout << word[i];
	}
	cout << "\n Bye!!";

	return 0;
}
