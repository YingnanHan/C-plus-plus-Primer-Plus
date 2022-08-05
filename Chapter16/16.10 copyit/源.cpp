// copyit.cpp -- copy() and iterators
#include<iostream>
#include<iterator>
#include<vector>

using namespace std;

int main()
{
	int casts[10] = { 6,7,2,9,4,11,8,7,10,5 };
	vector<int> dice(10);
	// copy from array to vector
	copy(casts, casts + 10, dice.begin());
	cout << "Let the dice be cast!" << endl;
	//create an ostream iterator
	ostream_iterator<int, char>out_iter(cout, " ");
	//copy from vector to output
	copy(dice.begin(), dice.end(), out_iter);
	cout << endl;
	cout << "Implicit use of reverse iterator.\n";
	copy(dice.rbegin(), dice.rend(), out_iter); // 使用反向迭代器赋值
	cout << endl;
	cout << "Explicit use of reverse iterater.\n";
	vector<int>::reverse_iterator ri; // 使用反向迭代器输出
	for (ri = dice.rbegin(); ri != dice.rend(); ++ri)
	{
		cout << *ri << " ";
	}
	cout << endl;
	return 0;
}