//arrfun4.cpp -- functions with an array range
#include<iostream>

using namespace std;

const int ArSize = 8;

int sum_arr(const int* begin, const int* end);

int main()
{
	int cookies[ArSize] = { 1,2,4,8,16,32,64,128 };

	int sum = sum_arr(cookies, cookies + ArSize);
	cout << "Total cookies eaten: " << sum << endl;
	sum = sum_arr(cookies, cookies + 3);
	cout << "First 3 eaters ate " << sum << " cookies.\n";
	sum = sum_arr(cookies + 4, cookies + 8);
	cout << "Last 4 eaters ate " << sum << " cookies.\n";
	return 0;
}

int sum_arr(const int* begin, const int* end)
{
	const int* pt;
	int total = 0;
	for (pt = begin; pt != end; pt++)
	{
		total = total + *pt;
	}
	return total;
}