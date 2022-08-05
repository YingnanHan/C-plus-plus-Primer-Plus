//enum.cpp -- using enum
#include<iostream>

// create named constants for 0-6

enum {red,orange,yellow,green,blue,violet,indigo};

using namespace std;

int main()
{
	cout << "Enter the color code(0-6):";

	int code;
	cin >> code;

	while (code >= red && code <= indigo)
	{
		switch (code)
		{
		case red:cout << "Her lips were red.\n"; break;
		case orange:cout << "Her hair were orange.\n"; break;
		case yellow:cout << "Her shoes were yellow.\n"; break;
		case green:cout << "Her nails were green.\n"; break;
		case blue:cout << "Her sweatsuits were blue.\n"; break;
		case violet:cout << "Her eyes were violet.\n"; break;
		case indigo:cout << "Her mood were indigo.\n"; break;
		}
		cout << "Enter the color code (0-6):";
		cin>>code;
	}
	cout << "Bye\n";

	return 0;
}
