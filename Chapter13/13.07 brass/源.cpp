// usebrass1.cpp -- testing bank account classes
// compile with brass.cpp

#include<iostream>
#include"brass.h"

using namespace std;

int main()
{

	Brass Piggy("Porcelot Pigg", 381299, 4000.00);
	BrassPlus Hoggy("Horatio Hogg", 382288, 3000.00);

	Piggy.ViewAcct();
	cout  << endl;
	Hoggy.ViewAcct();
	cout << endl;
	cout << "Depositing $1000 into the Hoggy Account:\n";
	Hoggy.Deposit(1000.00);
	cout << "New balance $:" << Hoggy.Balance() << endl;
	cout << "Withdrawing $4200 from the Pigg Account:\n";
	Piggy.Withdraw(4200.00);
	cout << "Piggy account balance $:" << Piggy.Balance() << endl;
	cout << "Withdrawing $4200 from the Hoggy Account:\n";
	Hoggy.Withdraw(4200.00);
	Hoggy.ViewAcct();

	return 0;
}