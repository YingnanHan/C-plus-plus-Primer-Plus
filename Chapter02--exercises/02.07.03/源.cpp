#include<iostream>

using namespace std;

void func1()
{
	cout << "Three blind mice" << endl;
}

void func2()
{
	cout << "See how they run" << endl;
}

void func()
{
	func1();
	func1();
	func2();
	func2();
}

int main()
{
	func();
	return 0;
}