#include<iostream>
#include<sstream>
#include<string>

using namespace std;

int main()
{
	string list = "It was a dark and stormy day, and the full moon glowed brilliantary. ";
	istringstream instr(list);
	string word;
	while (instr >> word)
	{
		cout << word << endl; // ��������������ǽ����ַ������տո���
	}

	return 0;
}