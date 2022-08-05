//usetime3.cpp -- using the 4th draft of the Time class
//compile usetime3.cpp and mytime3.cpp together

#include<iostream>
#include"mytime3.h"

using namespace std;

int main()
{
	Time aida(3, 45);
	Time tosca(2, 48);
	Time temp;

	cout << "Aida and Tosca:\n";
	cout << aida << "; " << tosca << endl;
	temp = aida + tosca;
	cout << "Aida+Tosca:\n"<<temp<<endl;
	temp = aida * 1.17;
	cout << "Aida*1.17:\n" << temp << endl;
	temp = 10.0 * tosca;
	cout << "10.0*Tosca:\n" << temp << endl;

	return 0;
}
