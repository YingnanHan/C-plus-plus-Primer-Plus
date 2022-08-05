#include <iostream>
using namespace std;
int factorial(unsigned int number);

int main()
{
    int number;
    long long fact;
    cout << "Please enter a number for factorial:";
    while (cin >> number)
    {
        fact = factorial(number);
        cout << number << "!=" << fact << endl;
        cout << "Please enter a number for factorial:";
    }
    return 0;
}

int factorial(unsigned int number)
{
    int result;
    if (number == 0 || number == 1)
    {
        result = 1;
    }
    else
    {
        result = number * factorial(number - 1);
    }
    return result;
}
