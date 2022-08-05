// write.cpp -- using cout.write()
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	const char* state1 = "Florida";
	const char* state2 = "Kansas";
	const char* state3 = "Euphoria";

	int len = strlen(state2);

	cout << "Increasing loop index:\n";
	int i;
	for (i = 0; i < len; i++)
	{
		cout.write(state2, i);//输出字符串state2的第i个字符
		cout << endl;
	}
	// concatenate output
	cout << "Decreasing loop index:\n";
	for (i = len; i > 0; i--)
	{
		cout.write(state2, i) << endl;
	}
	cout << endl;
	// exceed string length
	cout << "Exceeding string length:\n";
	cout.write(state2, len + 5) << endl;

	return 0;
}