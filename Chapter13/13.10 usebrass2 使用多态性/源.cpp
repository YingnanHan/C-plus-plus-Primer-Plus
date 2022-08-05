// usebrass2.cpp -- polymorphic example
// compile with brases.cpp

#include<iostream>
#include<string>
#include"brass.h"

const int CLIENTS = 4;

using namespace std;

int main()
{
	Brass* p_clients[CLIENTS];
	string temp;
	long tempnum;
	double tempbal;
	char kind;

	for (int i = 0; i < CLIENTS; i++)
	{
		cout << "Enter client's name:";
		getline(cin,temp);
		cout << "Enter client's account number:";
		cin >> tempnum;
		cout << "Enter opening balance: $";
		cin >> tempbal;
		cout << "Enter 1 for Brass Account or 2 for BrassPlus Account:";
		while (cin >> kind && (kind != '1' && kind != '2'))
		{
			cout << "Enter either 1 or 2:";
		}
		if (kind == '1')
		{
			p_clients[i] = new Brass(temp, tempnum, tempbal);
		}
		else
		{
			double tmax, trace;
			cout << "Enter the overfraft limit: $";
			cin >> tmax;
			cout << "Enter the interest rate as a decimal fraction:";
			cin >> trace;
			p_clients[i] = new BrassPlus(temp, tempnum, tempbal, tmax, trace);
		}
		while (cin.get() != '\n')
		{
			continue;
		}
	}

	cout << endl;
	for (int i = 0; i < CLIENTS; i++)
	{
		p_clients[i]->ViewAcct();
		cout << endl;
	}

	for (int i = 0; i < CLIENTS; i++)
	{
		delete p_clients[i];
	}
	cout << "Done.\n";
	return 0;
}