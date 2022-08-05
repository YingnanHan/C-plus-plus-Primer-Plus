//express.cpp -- values of expressions
#include<iostream>

using namespace std;

int main()
{

	int x;

	cout << "The expression x = 100 has the value:";
	cout << (x = 100) << endl;
	cout << "Now x = " << x << endl;

	cout << "The expression x < 3 has the value:";
	cout << (x < 3) << endl;

	cout << "The expression x > 3 has the value:";
	cout << (x > 3) << endl;

	cout.setf(ios_base::boolalpha); // the new C++ feature 这个标记表示将cout显示true false 而不是0 1
	cout << "The expression x < 3 has the value ";
	cout << (x < 3) << endl;
	cout << "The expression x > 3 has the value ";
	cout << (x > 3) << endl;

	return 0;
}