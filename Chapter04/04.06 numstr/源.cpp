// numstr.cpp -- following number input with line input
#include<iostream>

using namespace std;

int main()
{
	cout << "When year was your house built?\n";
	int year;
	
	// (cin >> year).get();//��֤������������ ������
	
	/*
		��ǰ���������ڣ���cin��ȡ��ݣ����س������ɵĻ��з��������������֮�У������cin.getline()�������з�֮��
		������Ϊ��һ�����У�����һ�����ַ�����ֵ��address���顣���֮���ǣ��ڶ�ȡ��ַ֮ǰ��ʹ��cin.get()��ȡ����
		�����з������������cin.get()��ʵ�֡�
	*/

	cin >> year;
	cin.get();

	cout << "What is its street address?\n";
	char address[80];
	cin.getline(address, 80); //cin.getlilne()�������з�֮����Զ�ֹͣ���룬�������ȡ���з������ǽ������ڻ�������
	cout << "Year built:" << year << endl;
	cout << "Address:" << address << endl;
	cout << "Done!\n";

	return 0;
}