#include<iostream>
#include<cctype>

using namespace std;

int main()
{
	char c;
	cin >> c;
	while (c != '@')
	{
		if (isupper(c))
		{
			c = tolower(c);
		}
		else if (islower(c))
		{
			c = toupper(c);
		}
		else if (!isalpha(c))
		{
			c = c;
		}
		cout << c<<endl;
		cin >> c;
	}

	return 0;
}