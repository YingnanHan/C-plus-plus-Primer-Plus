// instr3.cpp -- reading more than one string with get() & get()

#include<iostream>

using namespace std;

int main()
{
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name:\n";
	// cin.get(str,size)并不再读取并丢弃换行符，而是将其留在输入队列中，如果不借助外在的帮助，get将不能跨过换行符
	// cin.get() 可以专门处理换行符 并且为读入下一条字符做准备
	cin.get(name, ArSize).get(); // read string newline
	cout << "Enter your favorate dessert:\n";
	cin.get(dessert, ArSize).get(); // read string newline
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";


	return 0;
}