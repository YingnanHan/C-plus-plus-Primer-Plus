#include <iostream>
using namespace std;
#include <string>
#include <cctype>

bool IsHui(const string& str);

int main()
{
    cout << "Enter input(empty input to quit): ";
    string input;
    getline(cin, input);
    while (cin && input.size() > 0)
    {
        if (IsHui(input))
            cout << "Yes.\n";
        else
            cout << "No.\n";
        cout << "Enter input(empty input to quit): ";
        getline(cin, input);
    }
    cout << "End.\n";

    return 0;
}

bool IsHui(const string& str)
{
    string str_test = str;//必须有
    for (auto i = str_test.begin(); i != str_test.end();) //i是str_test各元素所在的位置,*i是元素
    {
        if (!isalpha(*i))
        {
            i = str_test.erase(i);//该位置的元素去掉
            continue;
        }
        else
        {
            *i = tolower(*i);
            i++;
        }
    }
    string f(str_test.rbegin(), str_test.rend());
    return (str_test == f);
}