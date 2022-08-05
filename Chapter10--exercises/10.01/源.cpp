#include<iostream>
#include<string>

using namespace std;

class BankAccount
{
private:
	string name;
	string account;
	double money;
public:
	BankAccount(const string& name, const string& account, double& money)
	{
		this->name = name;
		this->account = account;
		this->money = money;
	}
	void show() const
	{
		cout << "User name:" << this->name << "\n" << "Money left:" << this->money << endl;
	}
	void deposite(double money)
	{
		this->money += money;
	}
	void withdraw(double money)
	{
		if (this->money < money)
		{
			cout << "You don't have enough money to withdraw!" << endl;
		}
		else
		{
			this->money -= money;
		}
	}
};

int main()
{
	string name = "Mike";
	string account = "1234567890";
	double init_money = 0.0;
	BankAccount bk = BankAccount(name,account,init_money);

	bk.show();
	bk.deposite(10000);
	bk.show();
	bk.withdraw(50);
	bk.show();
	return 0;
}