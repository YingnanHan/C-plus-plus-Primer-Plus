// usestock0.cpp -- the client program
// compile with stock00.cpp
#include<iostream>
#include"stock00.h"

int main()
{
	Stock flutty_the_cat;
	flutty_the_cat.aquire("NanoSmart", 20, 12.50);
	flutty_the_cat.show();
	flutty_the_cat.buy(15, 18.125);
	flutty_the_cat.show();
	flutty_the_cat.buy(400, 20.00);
	flutty_the_cat.show();
	flutty_the_cat.buy(300000,40.125);
	flutty_the_cat.show();
	flutty_the_cat.buy(400000, 100.125);
	flutty_the_cat.show();
	return 0;
}