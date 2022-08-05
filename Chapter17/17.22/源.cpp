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
		cout << word << endl; // 这个函数的作用是将以字符串按照空格拆分
	}

	return 0;
}