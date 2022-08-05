#include <iostream>
using namespace std;
const int MAX = 10;
int fill_array(double ar[], int limit);
void show_array(double ar[], int n);
double calculate_array(double ar[], int n);

int main()
{
    double golf[MAX];
    int size = fill_array(golf, MAX);
    if (size > 0)
    {
        show_array(golf, size);
        calculate_array(golf, size);
    }
    else
    {
        cout << "There is no golf performance. \n";
    }
    cout << "Done. \n";
    return 0;
}

int fill_array(double ar[], int limit)
{
    double temp;
    int i;
    for (i = 0; i < limit; i++)
    {
        cout << "Enter golf performance #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
            {
                continue;
            }
            cout << "Bad input; ipput proces terminated. \n";
            break;
        }
        else if (temp < 0)
        {
            break;
        }
        ar[i] = temp;
    }
    return i;
}

void show_array(double ar[], int n)
{
    cout << "golf results are: ";
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
}

double calculate_array(double ar[], int n)
{
    double sum = 0, average;
    for (int i = 0; i < n; i++)
    {
        sum += ar[i];
    }
    average = sum / n;
    cout << "golf average is: " << average << endl;
    return average;
}
