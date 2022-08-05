
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class Stonewt
{
private:
	enum { Lbs_per_stn = 14 };
	int stone;
	double pds_left;
	double pounds;
public:
	Stonewt(double lbs);
	Stonewt(int stn, double lbs);
	Stonewt();
	~Stonewt();
	bool operator<(const Stonewt& st)const;
	bool operator<=(const Stonewt& st)const;
	bool operator>(const Stonewt& st)const;
	bool operator>=(const Stonewt& st)const;
	bool operator==(const Stonewt& st)const;
	bool operator!=(const Stonewt& st)const;
	friend ostream& operator<<(ostream& os, const Stonewt& st);
};

Stonewt::Stonewt(double lbs)
{
	stone = int(lbs) / Lbs_per_stn;
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
}
Stonewt::Stonewt(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
}
Stonewt::Stonewt()
{
	stone = pounds = pds_left = 0;
}
Stonewt::~Stonewt()
{
}
bool Stonewt::operator<(const Stonewt& st)const
{
	if (pounds < st.pounds)
		return true;
	else
		return false;
}
bool Stonewt::operator<=(const Stonewt& st)const
{
	if (pounds <= st.pounds)
		return true;
	else
		return false;
}
bool Stonewt::operator>(const Stonewt& st)const
{
	if (pounds > st.pounds)
		return true;
	else
		return false;
}
bool Stonewt::operator>=(const Stonewt& st)const
{
	if (pounds >= st.pounds)
		return true;
	else
		return false;
}
bool Stonewt::operator==(const Stonewt& st)const
{
	if (pounds == st.pounds)
		return true;
	else
		return false;
}
bool Stonewt::operator!=(const Stonewt& st)const
{
	if (pounds != st.pounds)
		return true;
	else
		return false;
}
ostream& operator<<(ostream& os, const Stonewt& st)
{
	os << st.pounds << " pounds\n";
	return os;
}

int main()
{
	Stonewt sw[6] = { 10.0, 11.0, 12.5 };
	Stonewt temp(11.0);
	for (int i = 3; i < 6; i++)
	{
		double input;
		cout << "Enter #" << i + 1 << ": ";
		cin >> input;
		sw[i] = input;
	}
	for (int i = 0; i < 6; i++)
		cout << "#" << i << ": " << sw[i];
	int count = 0;
	Stonewt Min = sw[0];
	Stonewt Max = sw[0];
	for (int i = 0; i < 6; i++)
	{
		if (Min > sw[i])
			Min = sw[i];
		if (Max < sw[i])
			Max = sw[i];
		if (temp >= sw[i])
			count++;
	}
	cout << "The Min pounds: " << Min;
	cout << "The Max pounds: " << Max;
	cout << "The numbers not under 11 pounds: " << count;
	cin.get();
	cin.get();
	return 0;
}