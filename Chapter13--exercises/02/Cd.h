#pragma once
#include<iostream>
using namespace std;

// base class
class Cd
{
private:
	char* performers;
	char* label;
	int selections; // number of selections
	double playtime; // playing time in minutes
public:
	//声明为explicit的构造函数不能在隐式转换中使用，只能显示调用，去构造一个类对象。
	Cd(const char* s1 = "", const char* s2 = "",
		int n = 0, double x = 0.0);
	//Cd(const Cd& d);
	Cd() { }
	virtual ~Cd();
	virtual void Report() const; // reports all CD data
	Cd& operator=(const Cd& d);
};

class Classic :public Cd
{
private:
	char* cdname;
public:
	Classic(const char* s1 = "", const char* s2 = "", const char* s3 = "",
		int n = 0, double x = 0.0);
	//Classic(const char* s1, Cd& d);
	//Classic(Cd& d);
	//Classic();
	virtual ~Classic();
	virtual void Report() const;
	Classic& operator=(const Classic& cl);
};
