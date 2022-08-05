#include "Wine.h"
template <typename T1, typename T2>
int Pair<T1, T2>::Sum(void) const
{
    return b.sum();
}
template <typename T1, typename T2>
void Pair<T1, T2>::Set(T1 yr, T2 bt)
{
    a = yr;
    b = bt;
}
template <typename T1, typename T2>
void Pair<T1, T2>::Show(void) const
{
    cout << "Year" << '\t' << "Bottles" << endl;
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << '\t' << b[i] << endl;
}
Wine::Wine(const char* l, int y)
{
    name = l;
    num = y;
}
Wine::Wine(const char* l, int y, const int yr[], const int bot[])
{
    name = l;
    num = y;
    data.Set(ArrayInt(yr, num), ArrayInt(bot, num));
}
void Wine::Show(void) const
{
    cout << "Wine: " << name << endl;
    data.Show();
}
void Wine::GetBottles(void)
{
    ArrayInt a1(num), a2(num);
    for (int i = 0; i < num; i++)
    {
        cout << "Enter year: ";
        cin >> a1[i];
        cout << "Enter bottles for that year: ";
        cin >> a2[i];
    }
    data.Set(a1, a2);
}
const string& Wine::Label(void) const
{
    return name;
}
int Wine::sum(void) const
{
    return data.Sum();
}
