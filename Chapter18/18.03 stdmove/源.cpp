// useless.cpp -- an otherwise useless class with move sematics
#include<iostream>

using namespace std;

// interface
class Useless
{
private:
	int n;			// number of elements
	char* pc;		// pointer to data
	static int ct;	// number objects
	void ShowObject() const;
public:
	Useless();
	explicit Useless(int k);
	Useless(int k, char ch);
	Useless(const Useless& f);	// regular copy constructure
	Useless(Useless&& f);		// move constructure
	~Useless();
	Useless operator+(const Useless& f)const;
	Useless& operator=(const Useless& f);	// copy assignment
	Useless& operator=(Useless&& f);			// move assignment
	// need operator=() in copy and move versations
	void ShowData() const;
};

// implementations
int Useless::ct = 0;

Useless::Useless()
{
	++ct;
	n = 0;
	pc = nullptr;
}

Useless::Useless(int k) : n(k)
{
	++ct;
	pc = new char[n];
}

Useless::Useless(int k, char ch) :n(k)
{
	++ct;
	pc = new char[n];
	for (int i = 0; i < n; i++)
	{
		pc[i] = ch;
	}
}


Useless::Useless(const Useless& f) :n(f.n)
{
	++ct;
	pc = new char[n];
	for (int i = 0; i < n; i++)
	{
		pc[i] = f.pc[i];
	}
}

Useless::Useless(Useless&& f) :n(f.n)
{
	++ct;
	pc = f.pc; // 让pc直接指向现有的数据，获得该数据的所有权
	f.pc = nullptr; // 随机对原有的数据指针进行销毁，防止出现悬空指针
	f.n = 0;
}

Useless::~Useless()
{
	delete[]pc;
}

Useless& Useless::operator=(const Useless& f) // copy assignment
{
	std::cout << "copy assignment operator called:";
	if (this == &f)
	{
		return *this;
	}
	else
	{
		delete[]pc;
		pc = new char[n];
		n = f.n;
		for (int i = 0; i < n; i++)
		{
			pc[i] = f.pc[i];
		}
		return *this;
	}
}

Useless& Useless::operator=(Useless&& f)	// move assignment
{
	std::cout << "move assignment operator called:\n";
	if (this == &f)
	{
		return *this;
	}
	else
	{
		delete[]pc;
		pc = new char[n];
		n = f.n;
		pc = f.pc;
		f.n = 0;
		f.pc = nullptr;
		return *this;
	}
}

Useless Useless::operator+(const Useless& f)const
{
	Useless temp = Useless(n + f.n);
	for (int i = 0; i < n; i++)
	{
		temp.pc[i] = pc[i];
	}
	for (int i = n; i < temp.n; i++)
	{
		temp.pc[i] = f.pc[i - n];
	}
	return temp;
}

void Useless::ShowObject() const
{
	cout << "Number of elements: " << n;
	cout << "Data address :" << (void*)pc << endl;
}

void Useless::ShowData() const
{
	if (n == 0)
	{
		cout << "(object empty)";
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			cout << pc[i];
		}
	}
	cout << endl;
}

// application
int main()
{

	//{
	//	Useless one(10, 'x');
	//	Useless two = one;		// calls copy constructor
	//	Useless three(20, 'o');
	//	// 注意 为什么这里使用了右值引用而不是左值 one+three 作为一个结果只能是在等号右边出现，所以是一个右值
	//	// 在进行解析的过程中，编译器推断出参数作为一个右值引用，所以调用右值引用作为参数的拷贝复制构造函数
	//	Useless four(one + three);	// calls operator+() ,move constructor 
	//	cout << "object one:";
	//	one.ShowData();
	//	cout << "object two:";
	//	two.ShowData();
	//	cout << "object three:";
	//	three.ShowData();
	//	cout << "object four:";
	//	four.ShowData();
	//}

	using std::cout;
	{
		Useless one(10, 'x');
		Useless two = one + one;	// calls move constructor
		cout << "object one: ";
		one.ShowData();
		cout << "object two: ";
		two.ShowData();
		Useless three, four;
		cout << "three = one\n";
		three = one;				// automatic copy assignment
		cout << "now object three = ";
		three.ShowData();
		cout << " and object one = ";
		one.ShowData();
		cout << "four = one + two:\n";
		four = one + two;			// automatic move assignment
		cout << "now object four = ";
		four.ShowData();

		four = std::move(one);		// forced move assignment
		cout << "now object four = ";
		four.ShowData();
		cout << " and object one = ";
		one.ShowData();
	}

	return 0;
}