// stock00.cpp -- implementing the Stock class
// version00
#include<iostream>
#include"stock00.h"

void Stock::aquire(const std::string& co, long n, double pr)
{
	company = co;
	if (n < 0)
	{
		std::cout << "Number of shares can't be negative;" << company << " share set to be 0!" << std::endl;
		share = 0;
	}
	else
	{
		share = n;
	}
	share_val = pr;
	set_tot();
}

void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		std::cout << "Number of shares purchased can't be negative . Transaction is aborted!!" << std::endl;
	}
	else
	{
		share += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(long num, double price)
{
	using std::cout;
	if (num < 0)
	{
		cout << "Number of shares sold can't be negative. Transaction is aborted!!" << std::endl;
	}
	else if(num>share)
	{
		cout << "You can't sell more than you have. Transaction is aborted!!" << std::endl;
	}
	else
	{
		share -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price)
{
	share_val = price;
	set_tot();
}

void Stock::show()
{
	std::cout << "Company :" << company << " Shares: " << share << "\n" << " Share Price: $" << share_val << " Total Worth:$" << total_val << std::endl;
}