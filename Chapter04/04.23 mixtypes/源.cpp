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
	pa->year = 1999; //��Ϊpa��һ��ָ��,������������Ҫʹ��->

	antarctica_years_end trio[3];//array of 3 structures
	trio[0].year = 2003;
	cout << trio->year << endl;//��������ʵ���Ͼ���trio[0].year

	const antarctica_years_end* arp[3] = { &s01,&s02,&s03 };//������һ�������޸ĵ�ָ������
	cout << arp[1]->year << endl;//��Ϊarp[1]��һ��ָ��,������������Ҫʹ��->

	const antarctica_years_end** ppa = arp;//arpָ��ṹ�����飬ppaָ��ṹ���һ����Ա
	auto ppb = arp;
	cout << (*ppa)->year << endl;
	cout << (*(ppb + 1))->year << endl; //*ppa�ȼ���arp

	return 0;
}