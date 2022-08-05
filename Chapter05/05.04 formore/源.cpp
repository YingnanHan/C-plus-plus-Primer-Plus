// formore.cpp -- more loop with for
#include<iostream>

using namespace std;

const int ArSize = 16;

int main()
{
	long long factorials[ArSize];
	factorials[0] = factorials[1] = 1LL;
	for (int i = 2; i < ArSize; i++)
	{
		factorials[i] = factorials[i - 1] * i;
	}
	for (int i = 0; i < ArSize; i++)
	{
		cout<<i<<"!="<<factorials[i]<<endl;
	}

	return 0;
}