
#include <iostream>
#include <cctype>
#include <string>

int main()
{
    using namespace std;
    cout << "Enter words (q to quit):\n";
    int type1 = 0;
    int type2 = 0;
    int type3 = 0;
    string input;
    cin >> input;
    while (input != "q")
    {
        if (isalpha(input[0]))
        {
            if (input[0] == 'a' || input[0] == 'e' || input[0] == 'i' || input[0] == 'o' || input[0] == 'u')
                type1++;
            else
                type2++;
        }
        else
            type3++;
        cin >> input;
    }
    cout << type1 << " words beginning with vowels" << endl;
    cout << type2 << " words beginning with consonants" << endl;
    cout << type3 << " others" << endl;

    system("pause");
    return 0;
}