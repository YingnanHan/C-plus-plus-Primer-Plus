//sales.h
namespace SALES
{
    const int QUAETERS = 4;
    struct sales
    {
        double sale[QUAETERS];
        double average;
        double max;
        double min;
    };
    void setsales(sales& s, const double ar[], int n);
    void setsales(sales& s);
    void showsales(const sales& s);
    template <class T>
    int arrlen(T& array)
    {
        return (sizeof(array) / sizeof(array[0]));
    }
}