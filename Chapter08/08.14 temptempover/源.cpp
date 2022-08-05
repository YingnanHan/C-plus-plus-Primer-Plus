// tempover.cpp -- template overloading

#include<iostream>

using namespace std;

template<typename T>
void ShowArray(T arr[], int n);

template<typename T>
void ShowArray(T *arr[], int n);

struct debts
{
	char names[50];
	double amount;
};

int main()
{
	int things[6] = { 13,31,103,301,310,130 };
	struct debts mr_E[3] =
	{
		{"Ima Wolfe", 2400.0},
		{"Ura Foxe", 1300.0},
		{"Iby Stout", 1800.0}
	};
	double* pd[3];

	//set pointers to the amount members of the stuctures in mr_E
	for (int i = 0; i < 3; i++)
	{
		pd[i] = &mr_E[i].amount;
	}
	cout << "Listing Mr.E's counts of things :\n";

	// things is an array of int
	ShowArray(pd, 3);
	cout << "Listing Mr.E's debt:\n";
	
	//pd is an array of pointers to double
	ShowArray(pd, 3);
	return 0;
}

template<typename T>
void ShowArray(T arr[], int n)
{
	cout << "template A\n";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

template<typename T>
void ShowArray(T* arr[], int n)
{
	cout << "template B\n";
	for (int i = 0; i < n; i++)
	{
		cout << *arr[i] << " ";
	}
	cout << endl;
}