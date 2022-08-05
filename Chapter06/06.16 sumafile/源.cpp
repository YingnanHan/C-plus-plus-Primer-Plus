//sum a file .cpp -- functions with an array argument
#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

const int SIZE = 60;

int main()
{
	char filename[SIZE];
	ifstream inFile;
	cout << "Enter name of data file:" << endl;
	cin.getline(filename, SIZE);
	inFile.open(filename);
	if (!inFile.is_open())
	{
		cout << "Could not open the file!" << filename << endl;
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE);
	}
	double value;
	double sum = 0.0;
	int count = 0;

	inFile >> value; // get first value
	while (inFile.good())
	{
		++count; // one more term read
		sum += value;
		inFile >> value; // get next value
	}
	if (inFile.eof())
	{
		cout << "End of file reached!!" << endl;
	}
	else if (inFile.fail())
	{
		cout << "Input terminated by data mismatch.\n";
	}
	else
	{
		cout << "Input terminated by unknown mismatch.\n";
	}
	if (count == 0)
	{
		cout << "No data processed!";
	}
	else
	{
		cout << "Items read:" << count << endl;
		cout << "Sum:" << sum << endl;
		cout << "Average:" << sum / count << endl;
	}
	inFile.close(); // finish with the file
	return 0;
}