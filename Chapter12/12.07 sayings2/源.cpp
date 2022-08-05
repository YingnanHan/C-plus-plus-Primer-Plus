// sayings2.cpp -- using pointers to objects
// compile with string1.cpp

#pragma warning(disable:4996)

#include<iostream>
#include<cstdlib>
#include<ctime>
#include"string1.h"

const int ArSize = 10;
const int MaxLen = 81;

#define _CRT_SECURE_NO_WARNINGS

using namespace std;

int main()
{
	String name;
	cout << "Hi ,what's your name?\n";
	cin >> name;

	cout << name << ", please enter up to " << ArSize << " short sayings < empty line quit >:\n";
	String sayings[ArSize];
	char temp[MaxLen];
	int i;
	for (i = 0; i < ArSize; i++)
	{
		cout << i + 1 << ": ";
		cin.get(temp, MaxLen);
		while (cin && cin.get() != '\n')
		{
			continue;
		}
		if (!cin || temp[0] == '\0')
		{
			break;
		}
		else
		{
			sayings[i] = temp;
		}
	}
	int total = i;

	if (total > 0)
	{
		cout << "Here are your sayings:\n";
		for (i = 0; i < total; i++)
		{
			cout << sayings[i] << " ";
		}

		// use pointers to keep track of shortest, first strings
		String* shortest = &sayings[0];
		String* first = &sayings[0];
		for (i = 0; i < total; i++)
		{
			if (sayings[i].length() < shortest->length())
			{
				shortest = &sayings[i];
			}
			if (sayings[i] < *first)
			{
				first = &sayings[i];
			}
		}
		cout << "Shortest saying:\n" << *shortest << endl;
		cout << "First alphabetically:\n" << *first << endl;
		srand(time(0));
		int choice = rand() % total;
		// use new to create ,initialize new String object
		String* favourate = new String(sayings[choice]);
		cout << "My favourate saying:\n" << *favourate << endl;
		delete favourate;
	}
	else
	{
		cout << "Not much to say eh?\n";
	}
	cout << "Bye.\n";

	return 0;
}