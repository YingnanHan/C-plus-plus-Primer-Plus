// instr2.cpp -- reading more than one string with getline

#include<iostream>

using namespace std;

int main()
{
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name:\n";
	//getlineһ���Զ�ȡһ�У����ǲ����滻�з������Ὣ���ַ��滻�����з�����ʾ�ַ����Ľ���
	cin.getline(name,ArSize); // reads through new line
	cout << "Enter your favorate dessert:\n";
	cin.getline(dessert, ArSize);
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";


	return 0;
}