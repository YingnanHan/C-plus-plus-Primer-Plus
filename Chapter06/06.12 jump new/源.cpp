// jump.cpp -- using continue and break
#include<iostream>

using namespace std;

const int ArSize = 80;

int main()
{
	char line[ArSize];
	int space = 0;

	cout << "Enter a line of text:";
	cin.get(line, ArSize);
	cout << "Complete line:\n" << line << endl;
	cout << "Line through first period:\n";
	for (int i = 0; line[i] != '\0'; i++)
	{
		cout << line[i]; //display character
		if (line[i] == '.')
		{
			break;
		}
		if (line[i] != ' ')
		{
			continue;
		}
		space++;
	}

	cout << "\n" << space << " spaces\n";
	return 0;
}