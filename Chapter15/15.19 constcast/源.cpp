//constcast.cpp -- using const_cast<>
#include<iostream>

using namespace std;

void change(const int* pt, int n)
{
	int* pc;
	pc = const_cast<int*>(pt); // ½« const int * ×ª»»Îªconst int
	*pc += n;
}

int main()
{
	int pop1 = 38383;
	const int pop2 = 2000;

	cout << "pop1,pop2: " << pop1 << " , " << pop2 << endl;
	change(&pop1, -103);
	change(&pop2, -103);
	cout << "pop1,pop2: " << pop1 << " , " << pop2 << endl;

	return 0;
}