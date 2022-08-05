// lambda1.cpp -- use captured variables
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<ctime>

const long Size = 390000L;

using namespace std;

int main()
{
	vector<int> numbers(Size);
	std::srand(std::time(0));
	std::generate(numbers.begin(), numbers.end(), std::rand);
	cout << "Sample size = " << Size << endl;

	// using lambdas
	int count3 = std::count_if(numbers.begin(), numbers.end(), [](int x) {return x % 3 == 0; });
	cout << "Count of numbers dicisible by 3:" << count3;
	int count13 = 0;
	std::for_each(numbers.begin(), numbers.end(), [&count13](int x) {count13 += x % 13 == 0; });
	cout << "Count of numbers divisible by 13:" << count13 << endl;

	// using a single lambda
	count3 = count13 = 0;
	std::for_each(numbers.begin(), numbers.end(), [&](int x) {count3 += x % 3 == 0; count13 += x % 13 == 0; });
	cout << "Count of numbers dicisible by 3:" << count3;
	cout << "Count of numbers divisible by 13:" << count13 << endl;

	return 0;
}