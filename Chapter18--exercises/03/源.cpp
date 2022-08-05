#include <iostream>
using namespace std;

long double sum_value()
{
    return 0;
}

template <typename T>
long double sum_value(const T& t)
{
    return t;
}

template <typename T, typename... Args>
long double sum_value(const T& t, const Args&... args)
{
    return t + sum_value(args...);
}

int main()
{
    int n = 100;
    double m = 99.66;
    long y = 100000;
    char ch = 'x';
    cout << sum_value(n, m, y, ch, 'A', 77, 99.52);

    return 0;
}