// error1.cpp -- using the abort() function

#include<iostream>
#include<cstdlib>

using namespace std;

double hmean(double a, double b);

int main()
{
	double x, y, z;
	cout << "Enter 2 numbers:";
	while (cin >> x >> y)
	{
		z = hmean(x, y);
		cout << "Harmonic mean of " << x << " and " << " is " << z << endl;
		cout << "Enter the set of numbers<q to quit>:";
	}
	cout << "Bye!!\n";
	return 0;
}

double hmean(double a, double b)
{
	if (a == -b)
	{
		std::cout << "untenable arguments to hmean()\n";
		std::abort(); // 系统调用 用来显示一个错误提示弹窗
	}
	return 2.0 * a * b / (a+b);
}