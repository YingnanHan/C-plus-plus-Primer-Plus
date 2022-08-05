// a
#include <iostream>
const int Seasons = 4;
const char* Snames[] = { "Spring", "Summer", "Fall", "Winter" };
void fill(double* p);
void show(double* p);

int main()
{
    double expenses[Seasons] = {};
    fill(expenses);
    show(expenses);
    return 0;
}

void fill(double* p)
{
    using namespace std;
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> p[i];
    }
}

void show(double* p)
{
    using namespace std;
    double total = 0.0;
    cout << "EXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << " :$" << p[i] << endl;
        total += p[i];
    }
    cout << "Total Expenses: $" << total << endl;
}

