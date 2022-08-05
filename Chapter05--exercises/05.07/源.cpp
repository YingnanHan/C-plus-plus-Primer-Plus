#include<iostream>
#include<string>
#include<cmath>

using namespace std;

struct car
{
	string name;
	int year;
};

int main()
{
	cout << "How many cars do you wish to catalog?" << endl;
	int num;
	(cin >> num).get();
	car* collection = new car[num];
	for (int i = 0; i < num; i++)
	{
		cout << "Car#" << i << ":" << endl;
		cout << "Please input the make:";
		getline(cin,collection[i].name);
		
		cout << "Please input the year made:";
		(cin >> collection[i].year).get(); // 这里必须要有get()
	}

	cout << "Here is your collections:" << endl;
	for (int i = 0; i < num; i++)
	{
		cout << collection[i].year << " " << collection[i].name << endl;
	}

	return 0;
}