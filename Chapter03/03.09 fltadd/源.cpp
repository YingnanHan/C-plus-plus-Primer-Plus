// fltadd.cpp -- precision problems with float
#include<iostream>

using namespace std;

int main()
{
	double a = 2.34e22f;
	double b = a + 1.0f;//float只能表示数字的前六位或者前七位，1加在了第23位double精度不够

	cout << "a = " << a << endl;
	cout << "b-a = " << b - a << endl;
	return 0;
}