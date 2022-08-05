#include<iostream>
#include"Cd.h"
using namespace std;

Cd::Cd(const char* s1, const char* s2, int n, double x) :selections(n), playtime(x)
{
	strcpy_s(performers, strlen(s1) + 1, s1);
	strcpy_s(label, strlen(s2) + 1, s2);
}

void Cd::Report() const // reports all CD data
{
	cout << "performers: " << performers << "\t"
		<< "label: " << label << "\t"
		<< "selections: " << selections << "\t"
		<< "playtime: " << playtime << endl;
}

//Cd::Cd()
//{
//	performers[0] = '\0';
//	label[0] = '\0';
//	selections = 0;
//	playtime = 0;
//}

Cd& Cd::operator=(const Cd& d)
{
	strcpy_s(performers, strlen(d.performers) + 1, d.performers);
	strcpy_s(label, strlen(d.label) + 1, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}

Classic::Classic(const char* s1, const char* s2, const char* s3,
	int n, double x) :Cd(s2, s3, n, x)
{
	strcpy_s(cdname, strlen(s1) + 1, s1);
}

void Classic::Report() const
{
	cout << "cdname: " << cdname << endl;
	Cd::Report();
}

Classic& Classic::operator=(const Classic& cl)
{
	if (this == &cl)
		return *this;
	strcpy_s(cdname, strlen(cl.cdname) + 1, cl.cdname);
	Cd::operator=(cl);
	return *this;
}
