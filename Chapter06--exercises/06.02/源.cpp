// 6.2-c.cpp: 定义控制台应用程序的入口点。
//

#include <iostream>    
using namespace std;
int main()
{
    double donation[10];
    int len, i, j;
    double sum = 0.0;
    double average;
    int num = 0;
    double line;
    cout << "Enter 10 donation:" << endl;
    for (i = 0; i < 10; i++)
    {
        cin >> donation[i];
        if (cin.fail())
        {
            cout << "Not a digit!\n";
            break;
        }
        sum += donation[i];
    }
    average = sum / i;
    for (i = 0; i < 10; i++)
    {
        if (donation[i] > average)
        {
            num++;
        }
    }
    cout << "The average = " << average << endl;
    cout << "In this array has " << num << " value(s) larger than avearge" << endl;

    system("pause");
    return 0;
}