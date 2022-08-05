#include<iostream>

using namespace std;

void func(string s, int n = 1)
{
	for (int i = 0; i < n; i++)
	{
		cout << s<<endl;
	}
}

int main()
{
	func("Hello ");
	return 0;
}