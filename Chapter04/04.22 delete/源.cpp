// delete.cpp -- using the delete operator

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<cstring>

using namespace std;

char* getname(void);

int main()
{
	char* name;

	name = getname();

	cout << name << " at " << (int*)name << "\n";
	delete[]name;

	name = getname();

	cout << name << " at " << (int*)name << "\n";
	delete[]name;

	return 0;
}

char* getname()
{
	char  tmp[80];
	cout << "Enter last name:";
	cin >> tmp;
	char* pn = new char[strlen(tmp) + 1];
	strcpy(pn, tmp);
	return pn;
}