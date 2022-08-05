#ifndef NAMESP_H
#define NAMESP_H

#include<string>

//create the pers and debts namespace
namespace pers
{
	struct Person
	{
		std::string fnames;
		std::string lnames;
	};

	void getPerson(Person&);
	void showPerson(const Person&);
}

namespace debts
{
	using namespace pers;

	struct Debt
	{
		Person name;
		double amount;
	};

	void getDebt(Debt&);
	void showDebt(const Debt&);
	double sumDebts(const Debt ar[], int n);
}

#endif // !NAMESP_H
