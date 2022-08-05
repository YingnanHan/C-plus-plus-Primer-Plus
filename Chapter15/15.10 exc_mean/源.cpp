#include<iostream>
#include<cmath>

using namespace std;

class bad_hmean
{
private:
	double v1;
	double v2;
public:
	bad_hmean(double a = 0, double b = 0) : v1(a), v2(b)
	{

	}
	void mesg();
};

inline void bad_hmean::mesg()
{
	cout << "hmean(" << v1 << ", " << v2 << "):" << "invalid arguments a = -b\n";
}

class bad_gmean
{
public:
	double v1;
	double v2;
	bad_gmean(double a = 0, double b = 0) :v1(a), v2(b)
	{

	}
	const char* mesg();
};

inline const char* bad_gmean::mesg()
{
	return "gmean() arguments should be >= 0\n";
}

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


int main()
{

	double x, y, z;

	cout << "Enter 2 numbers:";
	while (cin >> x >> y)
	{
		try
		{
			z = hmean(x, y);
			cout << "Harmonic mean of " << x << " and " << y << " is:" << z << endl;
			cout << "Geimetric mean of " << x << " and " << y << " is:" << gmean(x,y) << endl;
			cout << "enter next set of numbers <q to quit>:";
		}// end of try block
		catch (bad_hmean& bg) // 当遇到异常的时候，会throw出来一个异常类对象
		{
			bg.mesg();
			cout << "Try again.\n";
			continue;
		}
		catch (bad_gmean& hg)
		{
			cout << hg.mesg();
			cout << "Values used: " << hg.v1 << "," << hg.v2 << endl;
			cout << "Sorry, you don't get to play any more.\n";
			break;
		}// end of catch block
	}
	cout << "Bye!\n";

	return 0;
}