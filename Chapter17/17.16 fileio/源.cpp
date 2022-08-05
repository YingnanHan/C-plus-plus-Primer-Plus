// fileio.cpp -- saving to a file
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	string filename;

	cout << "Enter name of a new file:";
	cin >> filename;

	// create a output stream object for new file and call it fout
	ofstream fout(filename.c_str()); // 这里可以不使用C风格字符串

	fout << "For your eye only!\n";
	cout << "Enter your secret number:";
	float secret;
	cin >> secret;
	fout << "Your secret number is " << secret << endl;
	fout.close();	// clsoe file

	// create input stream object for new file and call it fin
	// ifstream fin(filename.c_str());
	ifstream fin(filename);

	cout << "Here are the content of " << filename << ":\n";
	char ch;
	while (fin.get(ch))
	{
		// read character from file and write it to screen
		cout << ch;
	}
	cout << "Done!";
	fin.close();

	return 0;
}