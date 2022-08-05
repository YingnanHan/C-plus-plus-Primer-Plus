#include<iostream>

using namespace std;

template<typename T>
T max(const T* arr, int n)
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

 template <> string max<string>(const string* arr, int n)
{
	int i = 0;
	string max_temp = "";
	if (n == 0)
	{
		return "";
	}
	else
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[j] > max_temp)
			{
				max_temp = arr[j];
			}
		}
		return max_temp;
	}
}

int main()
{
	double arr1[5] = { 1,2,3,4,5 };
	cout << max(arr1, 5);
	cout << endl;
	string arr2[5] = { "1","2","3","4","5" };
	cout << max(arr2, 5);
	return 0;
}