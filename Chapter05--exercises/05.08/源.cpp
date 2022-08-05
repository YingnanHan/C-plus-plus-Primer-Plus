#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const int ArSize = 256;
    char str[ArSize];
    unsigned int count = 0;

    cout << "Enter words (to stop, type the word done):" << endl;
    while (cin >> str)
    {
        if (0 == strcmp("done", str))
        {
            break;
        }
        ++count;
    }
    cout << "You entered a total of " << count << " words." << endl;

    return 0;
}
