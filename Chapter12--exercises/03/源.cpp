// usestock20.cpp -- using the Stock class
// compile with stock20.cpp
#include <iostream>
#include "stock20.h"
using std::cout;

const int STKS = 4;
int main()
{
    Stock stocks[STKS] =
    {
        Stock("NanoSmart", 12, 20.0),
        Stock("Boffo Objects", 200, 2.0),
        Stock("Monolithic Obelisks", 130, 3.25),
        Stock("Fleep Enterprises", 60, 6.5)
    };

    std::cout << "Stock holdings:\n";
    int st;
    for (st = 0; st < STKS; st++)
        cout << stocks[st];
    const Stock* top = &stocks[0];
    for (st = 1; st < STKS; st++)
        top = &top->topval(stocks[st]);
    cout << "\nMost valuable holding:\n";
    cout << *top;
    system("pause");
    return 0;
}