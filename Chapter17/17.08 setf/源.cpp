// setf.cpp -- using setf() to control formatting
#include<iostream>

using namespace std;

int main()
{
	int temperature = 63;
	cout << "Today's water templaerature:";
	cout.setf(ios_base::showpoint);
	cout << temperature << endl;

	cout << "For our programming friends , that's\n";
	cout << std::hex << temperature << endl;
	cout.setf(ios_base::uppercase); // 使用大写字母
	cout.setf(ios_base::showbase);	// 显示0X前缀
	cout << "or\n";
	cout << temperature << endl;
	cout << "How " << true << "! oops --How ";
	cout.setf(ios_base::boolalpha); // 将布尔变量true显示为true
	cout << true << "!\n";

	return 0;
}