#include <iostream>
using namespace std;
double harmean(double x, double y);

int main()
{
    cout << "Please enter two numbers, until one of the numbers is 0: ";
    double x, y, result;
    cin >> x >> y;
    while (x != 0 && y != 0)
    {
        result = harmean(x, y);
        cout << "the harmean is:" << result << endl;
        cout << "Please enter two numbers, until one of the numbers is 0: ";
        cin >> x >> y;
    }
    cout << "Done." << endl;
    return 0;
}

double harmean(double x, double y)
{
    return 2.0 * x * y / (x + y);
}
