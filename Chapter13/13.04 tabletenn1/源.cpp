// usett1.cpp -- using base class and derived class

#include<iostream>
#include"tabtenn1.h"

using namespace std;

int main(void)
{
	TableTennisPlayer player1("Tara", "Boomdea", false);
	RatedPlayer rplayer1(1140, "Mallory", "Duck", true);
	rplayer1.Name();
	if (rplayer1.HasTable())
	{
		cout << ": has a table" << endl;
	}
	else
	{
		cout << ": not has a table" << endl;
	}
	player1.Name();
	if (player1.HasTable())
	{
		cout << ": has a table" << endl;
	}
	else
	{
		cout << ": not has a table" << endl;
	}
	cout << "Name:";
	rplayer1.Name();
	cout << "; Rating:" << rplayer1.Rating() << endl;

	// initialize RatedPlayer uising TableTennisPlayer
	RatedPlayer rplayer2(1212, player1);
	cout << "Name: ";
	rplayer2.Name();
	cout << "; Rating: " << rplayer2.Rating() << endl;

	return 0;
}