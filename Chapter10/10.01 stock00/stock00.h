// stock00.h -- Stock class interface
// version 00

#ifndef STOCK00_H_
#define STOCK00_H_

#include<string>

class Stock // class declaration
{
private:
	std::string company;
	long share;
	double share_val;
	double total_val;
	void set_tot()
	{
		total_val = share * share_val;
	}
public:
	void aquire(const std::string& co, long n, double pr);
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();
};// note semicolon at the end

#endif // !STOCK00_H_
