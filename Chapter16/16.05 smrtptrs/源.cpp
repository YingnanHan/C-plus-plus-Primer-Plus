// smrtptrs.cpp -- using 3 kinds of smart pointers
// requires support of C++11 shared_ptr and unique_ptr

#include<iostream>
#include<string>
#include<memory>

using namespace std;

class Report
{
private:
	string str;
public:
	Report(const string s) : str(s)
	{
		cout << "Object created!" << endl;
	}
	~Report()
	{
		cout << "Object deleted!" << endl;
	}
	void comment() const
	{
		cout << str << endl;
	}
};

int main()
{
	{
		std::auto_ptr<Report> ps(new Report("using auto_ptr"));
		// std::auto_ptr<Report> ps = new Report("using auto_ptr"); // 不可以这么写,因为智能指针不支持隐式转换
		ps->comment();
	}

	{
		std::shared_ptr<Report> ps(new Report("using shared_ptr"));
		ps->comment();
	}

	{
		std::unique_ptr<Report> ps(new Report("using unique_ptr"));
		ps->comment();
	}
	return 0;
}