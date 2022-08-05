
#ifndef STONEWT_H_
#define STONEWT_H_

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
class Stonewt
{
public:
	enum Mode { STN, INPD, FPD };
private:
	static int const Lbs_per_stn = 14;
	int stone;
	double pds_left;
	double pounds;
	int pounds_int;
	Mode mode;
	void set_stn();
	void set_pds();
	void set_pds_int();
public:
	Stonewt(double lbs, Mode form);
	Stonewt(int stn, double lbs, Mode form);
	Stonewt();
	~Stonewt();
	void stn_mode();
	void pds_mode();
	void int_pds_mode();
	operator int()const;
	operator double()const;
	Stonewt operator+(const Stonewt& st)const;
	Stonewt operator-(const Stonewt& st)const;
	Stonewt operator*(double n)const;
	friend Stonewt operator*(double n, const Stonewt& st);
	friend ostream& operator<<(ostream& os, const Stonewt& st);
};
#endif
