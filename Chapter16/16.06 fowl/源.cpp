#include<iostream>
#include<string>
#include<memory>

using namespace std;

int main()
{
	// auto_ptr<string> films[5] =
	shared_ptr<string> films[5] =
	{
		auto_ptr<string>(new string("Fowl Balls")),
		auto_ptr<string>(new string("Duck Walls")),
		auto_ptr<string>(new string("Chicken Runs")),
		auto_ptr<string>(new string("Turkey Errors")),
		auto_ptr<string>(new string("Google Eggs")),
	};

	// auto_ptr<string>pwin;
	shared_ptr<string>pwin;
	pwin = films[2]; // 智能指针的复制表示智能指针对象的所有权的转让
	cout << "The nominees for best avian baseball film are:" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << *films[i] << endl;
	}
	cout << "The winner is " << *pwin <<"!"<< endl;
	cin.get();
	return 0;
}