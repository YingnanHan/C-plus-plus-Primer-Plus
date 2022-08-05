
#include <iostream>

int main()
{
    using namespace std;
    cout << "Please enter your input: ";
    char ch;
    int count = 0;
    cin.get(ch);
    while (ch != '$' && ch != '\n')
    {
        count++;
        cin.get(ch);
    }
    if (ch == '$')
        cout << "\"$\" detected.\n";
    else
        cout << "Input over.\n";
    cout << "There are " << count << " characters in the input stream.\n";
    system("pause");
    return 0;
}
