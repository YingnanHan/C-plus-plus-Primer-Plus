#include <iostream>
using namespace std;
double add(double, double);
double subtract(double, double);
double multiply(double, double);
double divide(double, double);
double calculate(double, double, double (*pf)(double, double));
const int SIZE = 4;
int main()
{

    double (*pf[SIZE])(double, double) = { add, subtract, multiply, divide };
    double x, y;
    cout << "Please enter two numbers <q to quit>: " << endl;
    while (cin >> x >> y)
    {
        for (int i = 0; i < SIZE; i++)
        {
            double q = calculate(x, y, pf[i]);
            cout << q << " ";
        }
        cout << "\nPlease enter two numbers <q to quit>: " << endl;
    }
    return 0;
}

double calculate(double x, double y, double (*pf)(double, double))
{
    double result;
    result = pf(x, y);
    return result;
}

double add(double x, double y)
{
    return x + y;
}
double subtract(double x, double y)
{
    return x - y;
}
double multiply(double x, double y)
{
    return x * y;
}

double divide(double x, double y)
{
    return x / y;
}

