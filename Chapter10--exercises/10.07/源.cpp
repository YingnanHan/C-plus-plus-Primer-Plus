
#include<iostream>
#include<cstring>

class Plorg {
private:
	char name[20];
	int CI;
public:
	Plorg(const char* n = "Plorga", int ci = 50);
	void resetci(int ci);
	char* rtname();
	int rtci();
};

Plorg::Plorg(const char* n, int ci) {
	strcpy_s(name, n);
	CI = ci;
}
void Plorg::resetci(int ci) {
	CI = ci;
}
char* Plorg::rtname() {
	return name;
}
int Plorg::rtci() {
	return CI;
}

using std::cout;
using std::endl;
int main() {
	Plorg p1("Binlang");
	cout << "p1: name: " << p1.rtname() << ", CI: " << p1.rtci() << endl;
	Plorg p2("yue", 100);
	cout << "p2: name: " << p2.rtname() << ", CI: " << p2.rtci() << endl;
	p2.resetci(150);
	cout << "p2: name: " << p2.rtname() << ", CI: " << p2.rtci() << endl;
	Plorg p3;
	cout << "p3: name: " << p3.rtname() << ", CI: " << p3.rtci() << endl;
	return 0;
}