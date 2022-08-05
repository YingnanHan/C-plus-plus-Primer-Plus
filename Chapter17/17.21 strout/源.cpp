//strout.cpp -- incore formmatting(output)
// 将数据放在缓冲区里面
#include<iostream>
#include<sstream>
#include<string>

using namespace std;

int main()
{
	ostringstream outstr;	// manages a stringstream
	string hdisk;
	cout << "What's the name of your hard disk?";
	getline(cin, hdisk);
	int cap;
	cout << "What's its capacity in GB?";
	cin >> cap;
	// write firmmated information to string stream
	outstr << "The hard disk " << hdisk << " has a capacity of " << cap << " gigabytes.\n";
	string result = outstr.str();	 // save result
	cout << result;

	return 0;
}