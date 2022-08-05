// setf2.cpp
#include <iostream>
#include <cmath>

int main()
{
	using namespace std;
	// 左对齐
	cout.setf(ios_base::left, ios_base::adjustfield);
	// 在正数前面加上+
	cout.setf(ios_base::showpos);
	// 显示末尾小数点
	cout.setf(ios_base::showpoint);
	// 规定精确到几位
	cout.precision(3);
	// 使用科学计数法, 并保存之前的设置
	ios_base::fmtflags old = cout.setf(ios_base::scientific, ios_base::floatfield);
	cout << "Left Justification:\n";
	long n;
	for (n = 1; n <= 41; n += 10)
	{
		cout.width(4);
		cout << n << "|";
		cout.width(2);
		cout << sqrt(double(n)) << "|\n";
	}
	// 右对齐
	cout.setf(ios_base::right, ios_base::adjustfield);
	// 使用定点小数法
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "Right Justification:\n";
	for (n = 1; n <= 41; n += 10)
	{
		cout.width(4);
		cout << n << "|";
		cout.width(12);
		cout << sqrt(double(n)) << "|\n";
	}
	return 0;
}