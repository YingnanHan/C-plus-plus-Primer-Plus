// arrobj.cpp -- function with array object (C++11)
#include<iostream>
#include<string>
#include<array>

using namespace std;

//constant data
const int Seasons = 4;
const std::array<std::string, Seasons> Snames = {"Spring","Summer","Fall","Winter"};

//function to modify array object
void fill(std::array<double, Seasons>* pa);
void show(std::array<double, Seasons>da);

int main()
{
	std::array<double, Seasons> expenses;
	fill(&expenses);
	show(expenses);

	return 0;
}

void fill(std::array<double,Seasons> *pa)
{
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Enter " << Snames[i] << " expenses.";
		cin >> (*pa)[i];
	}
}

void show(std::array<double, Seasons>da)
{
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << " : $" << da[i] << endl;
	}
	cout << "Total Expenses: $" << total << endl;
}