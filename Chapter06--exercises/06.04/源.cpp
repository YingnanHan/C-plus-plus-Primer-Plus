#include <iostream>

int main()
{
    using namespace std;

    cout << "Benevolent Order of Programmers Report" << endl;
    cout << "a. display by name\t\t";
    cout << "b. display by title\n";
    cout << "c. display by bopname\t\t";
    cout << "d. display by preference\n";
    cout << "q. quit\n";

    cout << "Enter your choice:";
    char choice;
    cin >> choice;
    while (choice != 'q')
    {
        switch (choice)
        {
        case 'a': cout << "Wimp Macho\n" << "Raki Rhodes\n" << "Celia Laiter\n";
            cout << "Hoppy Hipman\n" << "Pat Hand\n";
            break;
        case 'd': cout << "Wimp Macho\n" << "Junior Programmer\n" << "MIPS\n" << "Analyst Trainee\n" << "LOOPY\n";
            break;
        }
        cout << "Enter your choice:";
        cin >> choice;
    }
    cout << "Bye!\n";
    system("pause");
    return 0;
}