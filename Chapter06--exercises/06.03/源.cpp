
#include <iostream>
#include <cctype>

int main()
{
	using namespace std;

	cout << "Please enter one of the following choices:" << endl;
	cout << "c) carnicore\t" << "p) pianist" << endl;
	cout << "t) tree\t\t" << "g) game" << endl;
	char alpha;
	cin.get(alpha);

	while (isalpha(alpha))
	{
		switch (alpha)
		{
		case 'c': cout << "A maple is a carnivore." << endl;
			break;
		case 'p': cout << "A maple is a pianisit." << endl;
			break;
		case 't': cout << "A maple is a tree." << endl;
			break;
		case 'g': cout << "A maple is a game." << endl;
			break;
		default: cout << "Please enter a c, p, t, or g: ";
			cin.ignore();
		}
		cin.get(alpha);
	}



	system("pause");
	return 0;
}