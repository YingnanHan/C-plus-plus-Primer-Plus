// cow.cpp -- containing the functions' definition 

#include <iostream>
#include <cstring>
#include "cow.h"

using std::cout;
using std::endl;

Cow::Cow()
{
    strcpy_s(name, 20, "new cow");
    hobby = new char[4];
    strcpy_s(hobby, 4, "cow");
    weight = 0.0;
}

Cow::Cow(const char* nm, const char* ho, double wt)
{
    weight = wt;
    hobby = new char[strlen(ho) + 1];
    strcpy_s(hobby, strlen(ho) + 1, ho);
    strcpy_s(name, 20, nm);
}

Cow::Cow(const Cow& c)
{
    strcpy_s(name, 20, c.name);
    hobby = new char[strlen(c.hobby) + 1];
    strcpy_s(hobby, strlen(c.hobby) + 1, c.hobby);
    weight = c.weight;
}

Cow::~Cow()
{
    delete[] hobby;
}

Cow& Cow::operator=(const Cow& c)
{
    delete[] hobby;
    hobby = new char[strlen(c.hobby) + 1];
    strcpy_s(hobby, strlen(c.hobby) + 1, c.hobby);
    weight = c.weight;
    strcpy_s(name, 20, c.name);
    return *this;
}

void Cow::ShowCow() const
{
    cout << "Now a new cow!\n";
    cout << "The name is " << name << endl;
    cout << "The hobby is " << hobby << endl;
    cout << "The weight is " << weight << endl;
}