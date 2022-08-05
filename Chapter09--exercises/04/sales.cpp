#include<iostream>
#include"sales.h"
namespace SALES
{
    void setsales(sales& s, const double ar[], int n = SALES::QUAETERS)
    {
        double sum = 0;
        s.max = -99999999;
        s.min = 99999999;
        for (int i = 0; i < n + 1; ++i)
        {
            s.sale[i] = ar[i];
            sum += s.sale[i];
            s.max = ar[i] > s.max ? ar[i] : s.max;
            s.min = ar[i] < s.min ? ar[i] : s.min;
        }
        s.average = sum / n;
    }
    void setsales(sales& s)
    {
        s.max = -99999999;
        s.min = 99999999;
        std::cout << "please input the array size: ";
        int sum = 0;
        int n;
        std::cin >> n;
        std::cout << "please input the data: ";
        for (int i = 0; i < n; ++i)
            std::cin >> s.sale[i],
            sum += s.sale[i];
        for (int i = 0; i < n; ++i) {
            s.max = s.sale[i] > s.max ? s.sale[i] : s.max;
            s.min = s.sale[i] < s.min ? s.sale[i] : s.min;
        }
        s.average = sum / n;
    }
    void showsales(const sales& s)
    {
        std::cout << "*****the info*****\n";
        std::cout << "the sales:" << std::endl;
        for (int i = 0; i < arrlen(s.sale); ++i)
            std::cout << s.sale[i] << "\t\n";
        std::cout << "the average: " << s.average << "\n";
        std::cout << "the min: " << s.min << "\n";
        std::cout << "the max: " << s.max << "\n";
    }
}