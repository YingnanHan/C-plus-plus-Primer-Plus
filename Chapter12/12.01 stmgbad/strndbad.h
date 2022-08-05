// strnbad.h -- flawed string class definition

#include<iostream>

#ifndef STRNBAD_H_
#define STRNBAD_H_

class StringBad
{
private:
	char* str;					// pointer to string
	int len;					// length of string
	static int num_strings;		// number of objects
public:
	StringBad(const char* s);	// constructor
	StringBad();				// default constructor
	~StringBad();				// destructor
//firend fucntion
	friend std::ostream& operator<<(std::ostream& os, const StringBad& st);
};

#endif // !STRNBAD_H_
