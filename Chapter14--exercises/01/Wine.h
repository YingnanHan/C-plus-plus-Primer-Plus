#ifndef WINE_H
#define WINE_H
#include <iostream>
#include <valarray>
#include <string>
using namespace std;
template <typename T1, typename T2>
class Pair
{
private:
    T1 a;
    T2 b;
public:
    Pair(void) {}
    int Sum(void) const;
    void Set(T1, T2);
    void Show(void) const;
};
class Wine
{
private:
    typedef valarray<int> ArrayInt;
    typedef Pair<ArrayInt, ArrayInt> PairArray;
    string name;
    PairArray data;
    int num;
public:
    Wine(const char* l, int y);
    Wine(const char* l, int y, const int yr[], const int bot[]);
    void Show(void) const;
    void GetBottles(void);
    const string& Label(void) const;
    int sum(void) const;
};
#endif
