#include<iostream>
#include<string>
using namespace std;
void strcount(const string s);
int main()
{
    string input;
    string next;
    cout << "Enter a line:\n";
    getline(cin, input);
    while (input != "") {
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
        getline(cin, input);
    }
    cout << "It's empty line.Done.\n";
    system("pause");
    return 0;
}
void strcount(const string s)
{
    static int total = 0;
    int count = 0;
    cout << "\"" << s << "\" contains ";
    count = s.length();
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}