#include<iostream>
#include"Port.h"
using namespace std;

int main()
{
	Port p1("abc", "defg", 10);
	Port p2(p1);
	Port p3 = p2;
	cout << p1 << endl << p2 << endl << p3 << endl;
	cout << "---------------------\n";

	p1 += 10;
	p2 += 20;
	p3 += 30;
	cout << p1 << endl << p2 << endl << p3 << endl;
	cout << "---------------------\n";

	p1 -= 30;
	p2 -= 20;
	p3 -= 10;
	cout << p1 << endl << p2 << endl << p3 << endl;
	cout << "---------------------\n";

	p1.Show();
	p2.Show();
	p3.Show();
	cout << "---------------------\n";

	VintagePort vp1("happy", "every day", 6, "nickname", 60);
	vp1.Show();
	cout << vp1 << endl;
	cout << "---------------------\n";

	VintagePort vp2(vp1);
	vp2.Show();
	cout << vp2 << endl;
	cout << "---------------------\n";

	VintagePort vp3 = vp2;
	vp3.Show();
	cout << vp3 << endl;
	cout << "---------------------\n";

	Port* p_port = &p1;
	p_port->Show();
	cout << endl;

	p_port = &vp1;
	p_port->Show();

	return 0;
}
