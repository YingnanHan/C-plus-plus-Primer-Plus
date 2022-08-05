// errors.cpp -- unwidding the stack

#include<iostream>
#include<string>
#include"exc_mean.h"

using namespace std;

class demo
{
private:
	std::string word;
public:
	demo(const std::string& str)
	{
		word = str;
		std::cout << "demo " << word << " created\n";
	}
	~demo()
	{
		std::cout << "demo " << word << " destroyed\n";
	}
	void show() const
	{
		std::cout << "demo " << word << " live! \n";
	}
};

double hmean(double a, double b)
{
	if (a == -b)
	{
		throw bad_hmean(a, b);
	}
	return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
	if (a < 0 || b < 0)
	{
		throw bad_gmean(a, b);
	}
	return std::sqrt(a * b);
}

double means(double a, double b)
{
	double am, hm, gm;
	demo d2("found in means");
	am = (a + b) / 2.0; // 几何平均
	try 
	{
		hm = hmean(a, b);
		gm = gmean(a, b);
	}
	catch (bad_hmean& bg)
	{
		bg.mesg();
		cout << "Caught in mean()" << endl;
		throw;
	}
	d2.show();
	return (am + hm + gm) / 3.0;
}

int main()
{

	double x, y, z;
	{
		demo d1("found in block in main()");
		cout << "Enter 2 numbers:";
		while (cin >> x >> y)
		{
			try
			{
				z = means(x, y);
				cout << "The mean mean of " << x << " and " << y << " is " << z << endl;
				cout << "Enter next pair:";
			}// end of try block
			catch (bad_hmean& bg)
			{
				bg.mesg();
				cout << "Try again.\n";
				continue;
			}
			catch (bad_gmean& hg)
			{
				cout << hg.mesg();
				cout << "Value used : " << hg.v1 << ", " << hg.v2 << endl;
				cout << "Sorry, you don't get to play any more.\n";
				break;
			}// end of catch block
		}
		d1.show();
	}
	cout << "Bye\n";
	cin.get();
	cin.get();

	return 0;
}