#include<iostream>
#include<string>
#include<vector>
#include<numeric>

using namespace std;

int main()
{
	vector<vector<double>>v;

	v = {
		{1,1,1,1,1,1,1,1,1,1,1,1},
		{2,2,2,2,2,2,2,2,2,2,2,2},
		{3,3,3,3,3,3,3,3,3,3,3,3}
	};

	double sum = 0;

	cout << "��һ���������Ϊ:" << accumulate(v[0].begin(), v[0].end(), 0)<<endl;
	cout << "�ڶ����������Ϊ:" << accumulate(v[1].begin(), v[1].end(), 0)<<endl;
	cout << "�������������Ϊ:" << accumulate(v[2].begin(), v[2].end(), 0)<<endl;

	return 0;
}
