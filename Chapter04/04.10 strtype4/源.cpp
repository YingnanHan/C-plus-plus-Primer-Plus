// strtype4.cpp -- line input
#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main()
{
	char charr[20];
	string str;

	// ����Ĭ�������strlenֻ���ҵ�\0 �Ž��������ַ����ĳ��ȣ���δ��ʼ�����ַ������������δ֪��
	// ��־���ַ���������λ�õ�'\0'���ܲ��ڷ��������С��λ����
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