#include<iostream>
#include<string>

using namespace std;

struct Pizza
{
	string company;
	double radius;
	double weights;
};

int main()
{
	string company;
	double radius, weights;

	cout << "Please input the information of a pizza:" << endl;
	cin >> company >> radius >> weights;
	Pizza* p = new Pizza();

	p->company = company;
	p->radius = radius;
	p->weights = weights;

	cout << "The concret information of pizza are as follows:" << endl;
	cout << p->company << " " << p->radius << " " << p->weights << endl;
	return 0;
}