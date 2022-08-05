// string1.cpp -- String class method

#include<cstring>
#include"string1.h"

using std::cin;
using std::cout;

#define _CRT_SECURE_NO_WARNINGS

// initializing static class member

int String::num_strings = 0;

// static method
int String::HowMany()
{
	return num_strings;
}

// class methods
String::String(const char* s)				// construct String from C string
{
	len = std::strlen(s);					// set size
	str = new char[len + 1];				// allot storage
	std::strcpy(str, s);					// initilaize pointer
	num_strings++;							// set object count
}	

String::String()							// default constructors
{
	len = 4;
	str = new char[1];
	str[0] = '\0';
	num_strings++;
}

String::String(const String& st)
{
	num_strings++;
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
}

String::~String()
{
	--num_strings;
	delete[] str;
}

//overloaded operator methods

//assign a String to a String
String& String::operator=(const String& st)
{
	if (&st == this)
	{
		return *this;
	}
	delete[]str;
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
	return *this;
}

// assign a C string to a string
String& String::operator=(const char* s)
{
	delete[] str;
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	return *this;
}

// read-write char access for non-cast String
char& String::operator[](int i)
{
	return str[i];
}

// read-only char access for const String
const char& String::operator[](int i)const
{
	return str[i];
}

// overloaded operator friends
bool operator<(const String& st1, const String& st2)
{
	return (std::strcmp(st1.str, st2.str)<0);
}

bool operator>(const String& st1, const String& st2)
{
	return st2 < st1;
}

bool operator==(const String& st1, const String& st2)
{
	return (std::strcmp(st1.str, st2.str) == 0);
}

// simple string output
ostream& operator<<(ostream& os, const String& st)
{
	os << st.str;
	return os;
}

// quick and dirty String input
istream& operator>>(istream& is, String& st)
{
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	if (is)
	{
		st = temp;
	}
	else
	{
		std::cerr << "something went wrong!" << std::endl;
	}
	while (is && is.get() != '\n') // ¶ªÆú»º³åÇø¶àÓà×Ö·û
	{
		continue;
	}
	return is;
}