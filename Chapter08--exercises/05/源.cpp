#include<iostream>

using namespace std;

template<typename T>
T max5(const T* arr, int n)
{
	if (sizeof arr / sizeof(T) == 0)
	{
		return -32767;
	}
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

int main()
{
	double arr[5] = { 1,2,3,4,5 };
	cout << max5(arr, 5);
	return 0;
}