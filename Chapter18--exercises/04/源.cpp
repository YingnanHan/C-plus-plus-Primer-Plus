#include <iostream>
using namespace std;
#include <list>
#include<algorithm>

auto outline_lambda = [](int n) { cout << n << " "; };

int main()
{
    int vals[10] = { 50, 100, 90, 180, 60, 210, 415, 88, 188, 201 };
    list<int> yadayada(vals, vals + 10);
    list<int> etcetera(vals, vals + 10);

    cout << "Original lists:\n";
    for_each(yadayada.begin(), yadayada.end(), outline_lambda);
    cout << endl;
    for_each(etcetera.begin(), etcetera.end(), outline_lambda);
    cout << endl;
    yadayada.remove_if([](int n) { return n > 100; });
    etcetera.remove_if([](int n) { return n > 200; });
    cout << "Trimmed lists:\n";
    for_each(yadayada.begin(), yadayada.end(), outline_lambda);
    cout << endl;
    for_each(etcetera.begin(), etcetera.end(), outline_lambda);
    cout << endl;

    return 0;
}