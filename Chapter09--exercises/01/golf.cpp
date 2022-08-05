//golf.cpp
#include<iostream>
#include"golf.h"

void setgolf(golf& g1, const char* name, int hc)
{
    for (int i = 0; i < strlen(name) + 1; ++i) {
        g1.fullname[i] = name[i];
    }
    g1.handicap = hc;
}

int setgolf(golf& g1)
{
    using namespace std;
    cout << "please enter the name: ";
    cin.getline(g1.fullname, 40);
    if (strlen(g1.fullname))
        cout << "enter the hc: ",
        cin >> g1.handicap,
        cin.get();
    return 0;
}

void handicap(golf& g1, int hc)
{
    g1.handicap = hc;
}

void showgolf(const golf& g1)
{
    using namespace std;
    cout << "====the golf info====\n";
    cout << "the name is: " << g1.fullname << "\n";
    cout << "the hc is :" << g1.handicap << "\n";
}