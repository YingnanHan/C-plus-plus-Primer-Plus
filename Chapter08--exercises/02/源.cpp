#include<iostream>

using namespace std;

struct CandyBar
{
	const char* brand;
	double weight;
	double calories;
};

void setValue(CandyBar& cb, const char* brand, double weight, double calories)
{
	cb.brand = brand;
	cb.weight = weight;
	cb.calories = calories;
}

void Show(const CandyBar& cb)
{
	cout << cb.brand << " " << cb.calories << " " << cb.weight << endl;
}

int main()
{
	CandyBar obj;
	setValue(obj, "ABC", 100, 200);
	Show(obj);
	return 0;
}