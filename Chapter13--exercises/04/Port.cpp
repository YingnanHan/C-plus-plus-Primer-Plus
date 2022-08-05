#include<iostream>
#include"Port.h"
using namespace std;

Port::Port(const char* br, const char* st, int b)
{
	brand = new char[strlen(br) + 1];
	strcpy_s(brand, strlen(br) + 1, br);
	strcpy_s(style, strlen(st) + 1, st);
	bottles = b;
}

Port::Port(const Port& p)
{
	brand = new char[strlen(p.brand) + 1];
	strcpy_s(brand, strlen(p.brand) + 1, p.brand);
	strcpy_s(style, strlen(p.style) + 1, p.style);
	bottles = p.bottles;
}

Port& Port::operator=(const Port& p)
{
	if (this == &p)
		return *this;
	delete[] brand;
	brand = new char[strlen(p.brand) + 1];
	strcpy_s(brand, strlen(p.brand) + 1, p.brand);
	strcpy_s(style, strlen(p.style) + 1, p.style);
	bottles = p.bottles;
	return *this;
}

Port& Port::operator+=(int b)
{
	bottles += b;
	return *this;
}

Port& Port::operator-=(int b)
{
	bottles -= b;
	return *this;
}

void Port::Show() const
{
	cout << "Brand: " << brand << endl
		<< "Kind: " << style << endl
		<< "Bottles: " << bottles << endl;
}

ostream& operator<<(ostream& os, const Port& p)
{
	os << p.brand << ", " << p.style << ", " << p.bottles;
	return os;
}

VintagePort::VintagePort(const char* br, const char* st,
	int b, const char* nn, int y) :Port(br, st, b)
{
	nickname = new char[strlen(nn) + 1];
	strcpy_s(nickname, strlen(nn) + 1, nn);
	year = y;
}

VintagePort::VintagePort(const VintagePort& vp) :Port(vp)
{
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy_s(nickname, strlen(vp.nickname) + 1, vp.nickname);
	year = vp.year;
}

VintagePort& VintagePort::operator=(const VintagePort& vp)
{
	if (this == &vp)
		return *this;
	Port::operator=(vp);
	delete[] nickname;
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy_s(nickname, strlen(vp.nickname) + 1, vp.nickname);
	year = vp.year;
}

void VintagePort::Show() const
{
	cout << "Nickname: " << nickname << endl
		<< "Year: " << year << endl;
	Port::Show();
}

ostream& operator<<(ostream& os, const VintagePort& vp)
{
	os << "Nickname: " << vp.nickname << ", "
		<< "Year: " << vp.year << endl;
	os << (const Port&)vp;
	return os;
}
