// stock10.h -- Stock class declearation with constructors, destructors added
#ifndef STOCK10_H_
#define STOCK10_H_

#include<string>

class Stock
{
private:
	std::string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot()
	{
		total_val = shares * share_val;
	}
public:
	// two constructures
	Stock(); // default constructures
	Stock(const std::string& co, long n = 0, double pr = 0.0);
	~Stock(); // noisy destructure

	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();
};

#endif // !STOCK10_H_
