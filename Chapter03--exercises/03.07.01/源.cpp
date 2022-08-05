#include<iostream>

using namespace std;

const int trans_facter = 12; //1Ó¢³ß == 12Ó¢´ç

int main()
{
	int height;
	cin >> height;
	cout << height / 12 << " feet and " << height % 12 << " inch" << endl;

	return 0;
}