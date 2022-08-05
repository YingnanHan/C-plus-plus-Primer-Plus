#include<iostream>
#include<string>
#include"sales.h"

int main()
{
    double a[4] = { 1,2,3,4 };
    SALES::sales s1;
    SALES::sales s2;
    SALES::setsales(s1, a, 3);
    SALES::showsales(s1);
    SALES::setsales(s2);
    SALES::showsales(s2);
    system("pause");
    return 0;
}