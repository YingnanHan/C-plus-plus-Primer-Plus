#include<iostream>
#include<string>

using namespace std;

int main()
{
	string month[12] = {
		"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"
	};

	int sum = 0;

	
	for (int i = 0; i < 12; i++)
	{
		cout << "Please input the sales of given month,"<<month[i] <<":" << endl;
		int x;
		cin >> x;
		sum += x;
	}
	cout << "本年度销售总额为:"<<sum;
	return 0;
}
