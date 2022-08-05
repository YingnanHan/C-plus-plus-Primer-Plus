//plus_one.cpp -- the increment operator

#include<iostream>

using namespace std;
/*
	前缀函数：将值加一，然后返回结果
	后缀函数：首先复制一个副本，将其加一，将副本返回
*/
int main()
{
	int a = 20;
	int b = 20;
	cout << "a = " << a << ": b = " << b << "\n";
	cout << "a++ = " << a++ << ": ++b = " << ++b << "\n";
	cout << "a = " << a << ": b = " << b << "\n";
	return 0;
}
