// use_stuc.cpp -- using a complete class
// compile with studentc.cpp

#include<iostream>
#include"studenti.h"

using namespace std;

void set(Student& sa, int n);
const int pupils = 3;
const int quizzes = 5;

int main()
{
	Student ada[pupils] = {
		Student(quizzes),
		Student(quizzes),
		Student(quizzes)
	};
	int i;
	for (i = 0; i < pupils; i++)
	{
		set(ada[i], quizzes);
	}
	cout << endl << "Student List:" << endl;
	for (i = 0; i < pupils; i++)
	{
		cout << ada[i].Name() << endl;
	}
	cout << endl << "Results:" << endl;
	for (i = 0; i < pupils; i++)
	{
		cout << endl << ada[i];
		cout << "average :" << ada[i].Average() << endl;
	}
	cout << "Done!" << endl;
	return 0;
}

void set(Student& sa, int n)
{
	cout << "Please enter the student's name: ";
	getline(cin, sa);
	cout << "Please enter " << n << " quize scores:" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> sa[i];
	}
	while (cin.get() != '\n')
	{
		continue;
	}
}
