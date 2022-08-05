//mixtypes.cpp -- some type combinations
#include<iostream>

using namespace std;

struct antarctica_years_end
{
	int year;
	//some really interesting data etc
};

int main()
{
	antarctica_years_end s01, s02, s03;
	s01.year = 1998;

	antarctica_years_end* pa = &s02;
	pa->year = 1999; //因为pa是一个指针,所以在这里需要使用->

	antarctica_years_end trio[3];//array of 3 structures
	trio[0].year = 2003;
	cout << trio->year << endl;//这里的输出实际上就是trio[0].year

	const antarctica_years_end* arp[3] = { &s01,&s02,&s03 };//定义了一个不可修改的指针数组
	cout << arp[1]->year << endl;//因为arp[1]是一个指针,所以在这里需要使用->

	const antarctica_years_end** ppa = arp;//arp指向结构体数组，ppa指向结构体第一个成员
	auto ppb = arp;
	cout << (*ppa)->year << endl;
	cout << (*(ppb + 1))->year << endl; //*ppa等价于arp

	return 0;
}