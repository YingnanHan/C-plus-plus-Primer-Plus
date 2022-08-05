
#include <iostream>
#include <cctype>
#include <string>

using namespace std;
string change(string& str);

int main()
{
    cout << "Enter a string (q to quit): ";
    string str;
    getline(cin, str);
    while (str != "q")
    {
        str = change(str);
        cout << str << endl;
        cout << "Next string (q to quit): ";
        getline(cin, str);
    }
    cout << "Bye." << endl;
    system("pause");
    return 0;
}

string change(string& str)
{
    for (int i = 0; str[i]; i++)
    {
        str[i] = toupper(str[i]);
    }
    return str;
}