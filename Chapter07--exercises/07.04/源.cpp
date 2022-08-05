#include <iostream>
using namespace std;
long double probability(unsigned numbers, unsigned picks);

int main()
{
    long double pro_field = probability(47, 5);
    long double pro_special = probability(27, 1);
    long double result = pro_field * pro_special;
    cout << result << endl;
    system("PAUSE");
    return 0;
}

long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    long double n;
    unsigned p;
    for (n = numbers, p = picks; p > 0; n--, p--)
    {
        result = result * n / p;
    }
    return result;
}
