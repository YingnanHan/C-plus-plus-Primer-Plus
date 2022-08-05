#include "Person.h"
int main(void)
{
	const int Size = 5;
	person* sit[Size];
	int ct;
	for (ct = 0; ct < Size; ct++)
	{
		char choice;
		cout << "enter the person: \n"
			<< "g:Gunslinger  p:pokerplayer " << "b:baddude  q:quit\n";
		cin >> choice;
		while (strchr("gpbq", choice) == NULL)
		{
			cout << "please enter a g¡¢p¡¢b¡¢q£º";
			cin >> choice;
		}
		if (choice == 'q')
			break;
		switch (choice)
		{
		case'g':sit[ct] = new Gunslinger;
			break;
		case'p':sit[ct] = new pokerplayer;
			break;
		case'b':sit[ct] = new baddude;
			break;
		}
		cin.get();
		sit[ct]->set();
	}
	cout << "\nhere is your staff:\n";
	int i;
	for (i = 0; i < ct; i++)
	{
		cout << endl;
		sit[ct]->show();
	}
	for (i = 0; i < ct; i++)
	{
		delete sit[ct];
	}
	cout << "bye:\n";
	system("pause");
	return 0;
}
