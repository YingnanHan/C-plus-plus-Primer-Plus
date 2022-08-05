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
		strcpy_s(fname, fn);   //����Ҫʹ��strcpy()��������������ʹ��fname=fn; ���򱨴� [Error] incompatible types                         //                           in assignment of 'const char*' to 'char [25]' 
							   //���ﲻ�ܰ�һ��ָ���ַ�����ָ�븳ֵ�����飬����������ָ��������׵�ַ�����߱������ǲ�һ��                           //�ģ�ָ����һ������������������һ��������string���;Ϳ���
							   //�õ��ں�ֱ��ʵ�ֿ����� 
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