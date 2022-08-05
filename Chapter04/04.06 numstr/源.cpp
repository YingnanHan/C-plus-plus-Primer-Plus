// numstr.cpp -- following number input with line input
#include<iostream>

using namespace std;

int main()
{
	cout << "When year was your house built?\n";
	int year;
	
	// (cin >> year).get();//保证程序正常工作 方案①
	
	/*
		此前的问题在于：当cin读取年份，将回车键生成的换行符留在了输入队列之中，后面的cin.getline()看到换行符之后
		将会认为是一个空行，并将一个空字符串赋值给address数组。解决之道是，在读取地址之前先使用cin.get()读取并丢
		弃换行符。这可以试用cin.get()来实现。
	*/

	cin >> year;
	cin.get();

	cout << "What is its street address?\n";
	char address[80];
	cin.getline(address, 80); //cin.getlilne()碰到换行符之后会自动停止输入，并不会读取换行符，而是将其留在缓冲区内
	cout << "Year built:" << year << endl;
	cout << "Address:" << address << endl;
	cout << "Done!\n";

	return 0;
}