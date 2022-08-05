// strtype4.cpp -- line input
#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main()
{
	char charr[20];
	string str;

	// 由于默认情况下strlen只有找到\0 才结束计算字符串的长度，而未初始化的字符串里的内容是未知的
	// 标志这字符串结束的位置的'\0'可能不在符合数组大小的位置上
	cout << "Length of string in charr before input:" << strlen(charr) << endl;
	cout << "Length of string in str before input:" << str.size() << endl;

	cout << "Enter a line of text:\n";
	cin.getline(charr, 20); // indicate the maximum length
	cout << "You entered :" << charr << endl;

	cout << "Enter another line of text:\n";
	getline(cin,str);//cin now an argumemt,no length specifier

	cout << "You entered:" << str << endl;

	cout << "Length of string in charr after input:" << strlen(charr) << endl;
	cout << "Length of string in str after input:" << str.size() << endl;

	return 0;
}