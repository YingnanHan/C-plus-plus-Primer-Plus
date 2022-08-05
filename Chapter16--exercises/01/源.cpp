#include <iostream>
using namespace std;
#include <string>

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
    string f(str.rbegin(), str.rend());//×Ö·û´®·´×ª
    return (str == f);
}