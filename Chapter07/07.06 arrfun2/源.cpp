// arrfun2.cpp -- functions with an array arugument
#include<iostream>

const int ArSize = 8;
int sum_arr(int arr[], int n);

using namespace std;

int main()
{
	int cookies[ArSize] = { 1,2,4,8,16,32,64,128 };

	cout << cookies << " = array address,";
	cout << sizeof cookies << " = sizeof cookies\n"; //cookies是数组
	int sum = sum_arr(cookies, ArSize);
	cout << "Total cookies eaten:" << sum << endl;
	sum = sum_arr(cookies, 3);
	cout << "First 3 eaters ate " << sum << " cookies.\n";
	sum = sum_arr(cookies+4, 4);
	cout << "Last 4 eaters ate " << sum << " cookies.\n";

	return 0;
}

int sum_arr(int arr[], int n)
{
	int total = 0;
	cout << arr << " = arr, ";
	cout << sizeof arr << " = sizeof arr\n"; // arr是指针变量
	for (int i = 0; i < n; i++)
	{
		total += arr[i];
	}
	return total;
}