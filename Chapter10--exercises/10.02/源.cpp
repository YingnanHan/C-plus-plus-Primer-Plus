#include<iostream>

using namespace std;

class Person
{
private:
	static const int LIMIT = 25;
	string lname;	// person's last name
	char fname[LIMIT]; // person's first name
public:
	Person()
	{
		lname = "";
		fname[0] = '\0';
	}
	Person(const string& ln, const char* fn = "Heyyou")
	{
		lname = ln;
		strcpy_s(fname, fn);   //这里要使用strcpy()拷贝函数，不能使用fname=fn; 否则报错 [Error] incompatible types                         //                           in assignment of 'const char*' to 'char [25]' 
							   //这里不能把一个指向字符串的指针赋值给数组，就算数组名指向数组的首地址，两者本质上是不一样                           //的，指针是一个变量，而数组名是一个常量，string类型就可以
							   //用等于号直接实现拷贝； 
	}
	void Show() const
	{
		cout << this->fname << " " << this->lname << endl;
	}
	void FormatShow() const
	{
		cout << this->lname << " " << this->fname << endl;
	}
};

int main()
{
	Person one;
	Person two("Smythecraft");
	Person three("Dimwiddy", "Sam");
	one.Show();
	cout << endl;
	one.FormatShow();

	three.Show();
	cout << endl;
	three.FormatShow();
	return 0;
}