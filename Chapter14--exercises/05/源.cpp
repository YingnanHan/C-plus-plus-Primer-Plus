#include"emp.h"
int main()
{
	employee em("trip", "harris", "thumper");
	cout << em << endl;
	em.Showall();
	manager ma("amorphia", "sprindragon", "nuancer", 5);
	cout << ma << endl;
	ma.Showall();
	fink fi("oggs", "oggs", "olier", "juno barr");
	cout << fi << endl;
	fi.Showall();
	highfink hf(ma, "curly kew");
	hf.Showall();
	cout << "please enter a key for next phase:\n";
	cin.get();
	highfink hf2;
	hf2.Setall();
	cout << "using an abstr_emp* pointer:\n";
	abstr_emp* tri[4] = { &em,&fi,&hf,&hf2 };
	for (int i = 0; i < 4; i++)
		tri[i]->Showall();
	system("pause");
	return 0;
}
