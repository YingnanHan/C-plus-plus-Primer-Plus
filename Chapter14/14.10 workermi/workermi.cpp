// workermi.cpp -- working class methods with MI
#include"workermi.h"
#include<iostream>

using namespace std;

// Worker methods
Worker::~Worker()
{

}

// protected methods
void Worker::Data() const
{
	cout << "Name: " << fullname << endl;
	cout << "Employee ID:" << id << endl;
}

void Worker::Get()
{
	getline(cin, fullname);
	cout << "Enter worker's ID:";
	cin >> id;
	while (cin.get() != '\n')
	{
		continue;
	}
}

// Waiter methods
void Waiter::Set()
{
	cout << "Enter waiter's name:";
	Worker::Get();
	Get();
}

void Waiter::Show() const
{
	cout << "Category: waiter\n";
	Worker::Data();
	Data();
}

// protected methods
void Waiter::Data()const
{
	cout << "Pannache rating: " << panache << endl;
}

void Waiter::Get()
{
	cout << "Enter waiter's panache rating:";
	cin >> panache;
	while (cin.get() != '\n')
	{

		continue;
	}
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
	cout << "Enter singer's name:";
	Worker::Get();
	Get();
}

void Singer::Show()const
{
	cout << "Category: singer\n";
	Worker::Data();
	Data();
}

// protected method
void Singer::Data() const
{
	cout << "Vocal range:" << pv[voice] << endl;
}

void Singer::Get()
{
	cout << "Enter number of singer's vocal range:\n";
	int i;
	for (i = 0; i < Vtypes; i++)
	{
		cout << i << ": " << pv[i] << "   ";
		if (i % 4 == 3)
		{
			cout << endl;
		}
	}
	if (i % 4 != 0)
	{
		cout << endl;
	}
	cin >> voice;
	while (cin.get() != '\n')
	{
		continue;
	}
}

// SingerWaiter methods
void SingerWaiter::Data() const
{
	Singer::Data();
	Waiter::Data();
}

void SingerWaiter::Get()
{
	Waiter::Get();
	Singer::Get();
}

void SingerWaiter::Set()
{
	cout << "Enter singing waiter's name:";
	Worker::Get();
	Get();
}

void SingerWaiter::Show() const
{
	cout << "Category singing waiter\n";
	Worker::Data();
	Data();
}