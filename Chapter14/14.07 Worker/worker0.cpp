// worker0.cpp -- working class methods
#include"worker0.h"
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

//worker mrthods

// must implements virtual destructor ,even if pure
Worker::~Worker()
{

}

void Worker::Set()
{
	cout << "Enter worker's name:";
	getline(cin, fullname);
	cout << "Enter Worker's ID:";
	cin >> id;
	while (cin.get() != '\n')
	{
		continue;
	}
}

void Worker::Show() const
{
	cout << "Nmae:" << fullname << endl;
	cout << "Employee ID:" << id<<endl;
}

// Waiter methods
void Waiter::Set()
{
	Worker::Set();
	cout << "Enter waiter's panache rating:";
	cin >> panache;
	while (cin.get() != '\n')
	{
		continue;
	}
}

void Waiter::Show() const
{
	cout << "Category: waiter\n";
	Worker::Show();
	cout << "Panache rating: " << panache << endl;
}

// Singer methods
// Singer methods
 // 下面这一部分在VS2022里面必须这么写，编译器默认static char* 为常量字符串
char* Singer::pv[] = {
	const_cast<char*>("other"),
	const_cast<char*>("alto"),
	const_cast<char*>("contralto"),
	const_cast<char*>("soprano"),
	const_cast<char*>("bass"),
	const_cast<char*>("bariton"),
	const_cast<char*>("tonor")
};


void Singer::Set()
{
	Worker::Set();
	cout << "Enter number of singer's vocal range:\n";
	int i;
	for (i = 0; i < Vtypes; i++)
	{
		cout << i << "; " << pv[i] << "   ";
		if (i % 4 == 0)
		{
			cout << endl;
		}

	}
	if (i % 4 != 0)
	{
		cout << endl;
	}
	while (cin >> voice && (voice < 0 || voice >= Vtypes))
	{
		cout << "Please enter a value >= 0 and <" << Vtypes << endl;
	}
	while (cin.get() != '\n')
	{
		continue;
	}
}

void Singer::Show() const
{
	cout << "Catgeory: singer:\n";
	Worker::Show();
	cout << "Vocal range:" << pv[voice] << endl;
}

