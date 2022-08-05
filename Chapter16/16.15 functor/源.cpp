//functor.cpp -- using a functor
#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>

template<typename T>
class tooBig
{
private:
	T cutoff;
public:
	tooBig(const T& t) :cutoff(t)
	{

	}
	bool operator()(const T& v)
	{
		return v > cutoff;
	}
};

void outint(int n)
{
	std::cout << n << " ";
}

using namespace std;

int main()
{
	tooBig<int> f100(100);
	int vals[] = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
	list<int>yadayada(vals, vals + 10);
	list<int>etcetera(vals, vals + 10);
	cout << "Original lists:\n";
	for_each(yadayada.begin(), yadayada.end(), outint);
	cout << endl;
	for_each(etcetera.begin(), etcetera.end(), outint);
	cout << endl;
	yadayada.remove_if(f100);
	etcetera.remove_if(tooBig<int>(200));
	cout << "Trimmed List:\n";
	for_each(yadayada.begin(), yadayada.end(), outint);
	cout << endl;
	for_each(etcetera.begin(), etcetera.end(), outint);
	cout << endl;
	return 0;
}