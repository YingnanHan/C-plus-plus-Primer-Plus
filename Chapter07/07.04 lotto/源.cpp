// lotto.cpp -- probability of wining
#include<iostream>
//Note : some implementations require double instead of long duoble
long double probability(unsigned numbers, unsigned picks);

int main()
{
	using namespace std;
	double total, choices;
	cout << "Enter the total number of choices on the game card and \n the number of picks allowd:\n";
	while ((cin >> total >> choices) && choices <= total)
	{
		cout << "You have 1 chance in " << probability(total, choices) << " of winning.\n Next 2 number (q to quit):";
	}
	cout << "Bye\n";
	return 0;
}

// the following function calculates the probability of picking picks
// numbers correctly from numbers choices
long double probability(unsigned numbers, unsigned picks)
{
	long double result = 1.0; // here come some local variables
	long double n;
	unsigned p;

	for (n = numbers, p = picks; p > 0; n--, p--)
	{
		result = result * n / p;
	}
	return result;
}