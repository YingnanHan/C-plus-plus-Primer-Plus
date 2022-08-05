#include<iostream>
#include<cstring>
#include"workermi.h"

const int SIZE = 5;

using namespace std;

int main()
{
	Worker* lolas[SIZE];

	int ct;
	for (ct = 0; ct < SIZE; ct++)
	{
		char choice;
		cout << "Enter the employees category:\n" << "w:waiter s:singer  " << "t:singing waiter q:quit\n";
		cin >> choice;
		while (strchr("wstq", choice) == NULL)
		{
			cout << "Please enter a w s t or q:";
			cin >> choice;
		}
		if (choice == 'q')
		{
			break;
		}
		switch (choice)
		{
		case 'w':
			lolas[ct] = new Waiter;
			break;
		case 's':
			lolas[ct] = new Singer;
			break;
		case 't':
			lolas[ct] = new SingerWaiter;
			break;
		}
		cin.get();
		lolas[ct]->Set();
	}

	cout << endl << "Here is your staff:\n";
	int i = 0;
	for (i = 0; i < ct; i++)
	{
		cout << endl;
		lolas[i]->Show();
	}
	for (i = 0; i < ct; i++)
	{
		delete lolas[i];
	}
	cout << "Bye.\n";
	return 0;
}