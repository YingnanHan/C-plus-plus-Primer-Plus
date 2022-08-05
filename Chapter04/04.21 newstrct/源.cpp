/*
	有的时候，C++新手在指定结构成员的时候，搞不清楚何时该使用句点运算符，何时应该使用箭头运算符。
	规则非常简单，如果结构标识符是结构名，则使用句点运算符，如果标识符是指向结构的指针，则使用箭头
	运算符
*/

#include<iostream>

using namespace std;

struct inflatable
{
	char name[20];
	float volumn;
	double price;
};

int main()
{
	inflatable* ps = new inflatable;
	cout << "Enter name of inflatable item:";
	cin.get(ps->name, 20);
	cout << "Enter volumn in cubic feet:";
	cin >> (*ps).volumn;
	cout << "Enter price: $";
	cin >> ps->price;
	cout << "Name:" << (*ps).name << endl;
	cout << "Volumn:" << ps->volumn << " cubic feet\n";
	cout << "Price:$" << ps->price << endl;
	delete ps;

	return 0;
}