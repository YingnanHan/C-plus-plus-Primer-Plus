// vslice.cpp -- using valarray sclices

#include<iostream>
#include<valarray>
#include<cstdlib>

const int SIZE = 12;
typedef std::valarray<int> vint;
using namespace std;

void show(const vint& v, int cols)
{
	int lim = v.size();
	for (int i = 0; i < lim; i++)
	{
		cout.width(3);
		cout << v[i];
		if (i % cols == cols - 1)
		{
			cout << endl;
		}
		else
		{
			cout << " ";
		}
	}
	if (lim % cols != 0)
	{
		cout << endl;
	}
}



int main()
{

	vint valint(SIZE);
	int i;
	for (i = 0; i < SIZE; i++)
	{
		valint[i] = std::rand() % 10;
	}
	cout << "Original array:\n";
	show(valint, 3);
	/////////////////////////////////////////////
	vint vcol(valint[slice(1, 4, 3)]);
	cout << "Second column:\n";
	show(vcol, 1);
	vint vrow(valint[slice(3, 3, 1)]);
	cout << "Second row:\n";
	show(vrow, 1);
	/////////////////////////////////////////////
	valint[slice(2, 4, 3)] = 10; // assign to 2nd column
	cout << "Set last column to 10 :\n";
	show(valint, 3);
	cout << "Set the first column to sum of next two:\n";
	valint[slice(0, 4, 3)] = vint(valint[slice(1, 4, 3)]) + vint(valint[slice(2, 4, 3)]); // valint对象没有加法运算 转换成vint对象以执行加法运算
	show(valint, 3);

	// cout << "Set the first column to sum of next two:\n";
	// valint[slice(0, 4, 3)] = valint[slice(1, 4, 3)] + valint[slice(2, 4, 3)];
	// show(valint, 3);
	return 0;
}