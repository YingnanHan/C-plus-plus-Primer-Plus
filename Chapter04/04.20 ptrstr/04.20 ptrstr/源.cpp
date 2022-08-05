#define _CRT_SECURE_NO_WARNINGS

// ptrstr.cpp -- using a pointer to string
#include<iostream>
#include<cstring>
#include<string.h>



using namespace std;

int main()
{
	char animal[20] = "bear";
	const char* bird = "wren"; // �ַ���������ֵ���� һ��ָ��ָ������ʱ����Ҫʹ��const����ʾָ��ָ����һ���������ó��������Ա��޸�
	char* ps;

	cout << animal << "  and  " << bird << "\n";
	cout << "Enter a kind of animal:";
	cin >> animal;

	ps = animal;
	cout << ps << "!\n";
	cout << "Before using strcpy(): \n";
	cout << animal << " at " << (int*)ps << endl;

	ps = new char[strlen(animal) + 1];
	strcpy(ps, animal);
	cout << "After using strcpy():\n";
	cout << animal << " at " << (int*)animal << endl;
	cout << ps << " at " << (int*)ps << endl;

	delete []ps;

	return 0;
}