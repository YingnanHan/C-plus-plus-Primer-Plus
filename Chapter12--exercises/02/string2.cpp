// string2.cpp -- String class methods
//

#include <cstring>
#include "string2.h"
#include <cctype>
using std::cin;
using std::cout;

int String::num_strings = 0;

int String::HowMany()
{
    return num_strings;
}

String::String(const char* s)
{
    len = std::strlen(s);
    str = new char[len + 1];
    strcpy_s(str, std::strlen(s) + 1, s);
    num_strings++;
}

String::String()
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
    strcpy_s(str, std::strlen(st.str) + 1, st.str);
}

String::~String()
{
    --num_strings;
    delete[] str;
}

void String::stringlow()
{
    for (int i = 0; i < this->len + 1; i++)
    {
        this->str[i] = tolower(this->str[i]);
    }
}

void String::stringup()
{
    for (int i = 0; i < this->len + 1; i++)
    {
        this->str[i] = toupper(this->str[i]);
    }
}

int String::has(char x)
{
    int count = 0;
    for (int i = 0; i < this->len + 1; i++)
    {
        if (this->str[i] == x)
            count++;
    }
    return count;
}

String& String::operator=(const String& st)
{
    if (this == &st)
        return *this;
    delete[] str;
    len = st.len;
    str = new char[len + 1];
    strcpy_s(str, std::strlen(st.str) + 1, st.str);
    return *this;
}

String& String::operator=(const char* s)
{
    delete[] str;
    len = std::strlen(s);
    str = new char[len + 1];
    strcpy_s(str, std::strlen(s) + 1, s);
    return *this;
}

char& String::operator[] (int i)
{
    return str[i];
}

const char& String::operator[] (int i) const
{
    return str[i];
}

bool operator<(const String& st1, const String& st2)
{
    return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String& st1, const String& st2)
{
    return st2 < st1;
}

bool operator==(const String& st1, const String& st2)
{
    return (std::strcmp(st1.str, st2.str) == 0);
}

ostream& operator<<(ostream& os, const String& st)
{
    os << st.str;
    return os;
}

istream& operator>>(istream& is, String& st)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is)
        st = temp;
    while (is && is.get() != '\n')
        continue;
    return is;
}

String String::operator+(const String& st) const
{
    int total_len = len + st.len;
    char* temp = new char[total_len + 1];
    strcpy_s(temp, len + 1, str);
    strcpy_s(temp + len, st.len + 1, st.str);
    temp[total_len] = '\0';
    return String(temp);
}

String String::operator+(const char* s) const
{
    int total_len = len + strlen(s);
    char* temp = new char[total_len + 1];
    strcpy_s(temp, len + 1, str);
    strcpy_s(temp + len, std::strlen(s) + 1, s);
    temp[total_len] = '\0';
    return String(temp);
}

String operator+(const char* s, const String& st)
{
    return String(s) + st;
}