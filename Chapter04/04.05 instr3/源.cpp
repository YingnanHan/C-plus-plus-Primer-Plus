// instr3.cpp -- reading more than one string with get() & get()

#include<iostream>

using namespace std;

int main()
{
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name:\n";
	// cin.get(str,size)�����ٶ�ȡ���������з������ǽ���������������У�������������ڵİ�����get�����ܿ�����з�
	// cin.get() ����ר�Ŵ����з� ����Ϊ������һ���ַ���׼��
	cin.get(name, ArSize).get(); // read string newline
	cout << "Enter your favorate dessert:\n";
	cin.get(dessert, ArSize).get(); // read string newline
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";


	return 0;
}