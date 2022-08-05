// checkcow.cpp -- check all the functions

#include <iostream>
#include "cow.h"

using namespace std;

int main()
{
    cout << "Let's start to see our cows!\n";
    Cow c1;
    c1.ShowCow();
    Cow c2("yellow", "eat grass", 123.456);
    c2.ShowCow();
    Cow c3("black", "drink water", 222.333);
    c3.ShowCow();
    c3 = c1;
    Cow c4(c2);
    c3.ShowCow();
    c4.ShowCow();
    system("pause");
    return 0;
}