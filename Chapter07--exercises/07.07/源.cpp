#include <iostream>
const int Max = 5;
double* fill_array(double* begin, double* end);
void show_array(double* begin, double* end);
void revalue(double r, double* begin, double* end);

int main()
{
    using namespace std;
    double properties[Max];
    double* end = fill_array(properties, properties + Max - 1);
    show_array(properties, end);
    cout << "Enter revaluation factor:";
    double factor;
    while (!(cin >> factor))
    {
        cin.clear();
        while (cin.get() != '\n')
        {
            continue;
        }
        cout << "Bad input: input process terminated. \n";
    }
    revalue(factor, properties, end);
    show_array(properties, end);
    cout << "Done.\n";
    return 0;
}

double* fill_array(double* begin, double* end)
{
    using namespace std;
    double* p;
    int i = 0;
    for (p = begin; p <= end; p++)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        if (!(cin >> *p))
        {
            cin.clear();
            while (cin.get() != '\n')
            {
                continue;
            }
            cout << "Bad input: input process terminated. \n";
            break;
        }
        i++;
    }
    return (p - 1);
}

void show_array(double* begin, double* end)
{
    using namespace std;
    double* p;
    int i = 0;
    for (p = begin; p <= end; p++)
    {
        cout << "Property #" << (i + 1) << ": $";
        cout << *p << endl;
        i++;
    }
}

void revalue(double r, double* begin, double* end)
{
    double* p;
    for (p = begin; p <= end; p++)
    {
        (*p) *= r;
    }
}
