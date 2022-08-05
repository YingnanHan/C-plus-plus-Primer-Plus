//hangman.cpp -- some string methods
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<cctype>

using namespace std;

const int NUM = 26;
const string wordList[NUM] = {
	"apiary",
	"beetle",
	"cereal",
	"danger",
	"ensign",
	"florld",
	"garage",
	"health",
	"insult",
	"jackal",
	"keeper",
	"loaner",
	"manage",
	"nonce",
	"onset",
	"plaid",
	"quilt",
	"remote",
	"stolid",
	"train",
	"useful",
	"valid",
	"whence",
	"xenon",
	"yearn",
	"zippy"
};

int main()
{
	char play;
	cout << "Will you play a word game?<y/n>";
	cin >> play;
	play = tolower(play);
	while (play == 'y')
	{
		string target = wordList[std::rand() % NUM];
		int length = target.length();
		string attempt(length, '-');
		string badchars;
		int guesses = 6;
		cout << "Guess my secret word, It has " << length << " letters, and you guess" << endl<<" one letter at a time. You get "<<guesses<<" wrong guesses.\n";
		cout << "Your word attempt " << attempt << endl;
		while (guesses > 0 && attempt != target)
		{
			char letter;
			cout << "Guess a letter: ";
			cin >> letter;
			if (badchars.find(letter) != string::npos || attempt.find(letter) != string::npos)
			{
				cout << "You already guessed that ,Try again" << endl;
				continue;
			}
			int loc = target.find(letter);
			if (loc == string::npos)
			{
				cout << "Oh, bad guess:\n";
				--guessess;
				badchars += letter;
			}
			else 
			{
				cout << "Good guess!\n";
				attempt[loc] = letter;
				// check if letter appears again
				loc = target.find(letter, loc + 1);
				while (loc != string::npos)
				{
					attempt[loc] = letter;
					loc = target.find(letter, loc + 1);
				}
			}
			cout << "Your word:" << attempt << endl;
			if (attempt != target)
			{
				if (badchars.length() > 0)
				{
					cout << "Bad choices:" << badchars << endl;
				}
				cout << guesses << " bad guesses left\n";
			}
		}
		if (guesses > 0)
		{
			cout << "That's right!" << endl;
		}
		else
		{
			cout << "Sorry, the word is " << target << endl;
			cout << "Will you play another?";
			cin >> play;
			play = tolower(play);
		}
	}
	cout << "Bye!";
	return 0;
}