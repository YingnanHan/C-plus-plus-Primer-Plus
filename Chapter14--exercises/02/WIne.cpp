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
Wine::Wine(const char* l, int y) : string(l)
{
    num = y;
}
Wine::Wine(const char* l, int y, const int yr[], const int bot[]) : string(l)
{
    num = y;
    PairArray::Set(ArrayInt(yr, num), ArrayInt(bot, num));
}
void Wine::Show(void) const
{
    cout << "Wine: " << (const string&)*this << endl;
    PairArray::Show();
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
    PairArray::Set(a1, a2);
}
const string& Wine::Label(void) const
{
    return (const string&)*this;
}
int Wine::sum(void) const
{
    return PairArray::Sum();
}
