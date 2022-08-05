// instr2.cpp -- reading more than one string with getline

#include<iostream>

using namespace std;

int main()
{
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name:\n";
	//getline一次性读取一行，但是不保存换行符，他会将空字符替换掉换行符，表示字符串的结束
	cin.getline(name,ArSize); // reads through new line
	cout << "Enter your favorate dessert:\n";
	cin.getline(dessert, ArSize);
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";


	return 0;
}