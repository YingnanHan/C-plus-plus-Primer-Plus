#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>

int main()
{
    vector<string> mat_f, pat_f, total_f;//3¸öÈÝÆ÷
    cout << "Enter Mat's friends(empty line to quit):\n";
    string temp;
    while (getline(cin, temp))
    {
        mat_f.push_back(temp);
        total_f.push_back(temp);
        if (temp[0] == '\0')
            break;
    }
    cout << "The following are Mat's friends:\n";
    sort(mat_f.begin(), mat_f.end());
    for (auto i = mat_f.begin(); i != mat_f.end(); i++)
        cout << *i << endl;
    cout << endl << endl;

    cout << "Enter Pat's friends(empty line to quit):\n";
    while (getline(cin, temp))
    {
        pat_f.push_back(temp);
        total_f.push_back(temp);
        if (temp[0] == '\0')
            break;
    }
    cout << "The following are Pat's friends:\n";
    sort(pat_f.begin(), pat_f.end());
    for (auto i = pat_f.begin(); i != pat_f.end(); i++)
        cout << *i << endl;
    cout << endl << endl;

    sort(total_f.begin(), total_f.end());
    unique(total_f.begin(), total_f.end());
    cout << "There are " << total_f.size() << " friends to be invited in total:\n";
    for (auto i = total_f.begin(); i != total_f.end(); i++)
        cout << *i << endl;
    cout << endl << endl;

    return 0;
}