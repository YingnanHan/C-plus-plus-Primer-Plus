#include<iostream>

using namespace std;

int main()
{
	double inch, foot;
	cout << "Please input your height:"<<endl;
	cin >> foot >> inch;

	double weight;
	cout << "Please input your weight:" << endl;
	cin >> weight;

	double meter = (12 * foot + 1 * inch) * 0.0254;
	double kilo = weight / 2.2;

	double BMI = weight / (meter * meter);

	cout << BMI;

	return 0;
}