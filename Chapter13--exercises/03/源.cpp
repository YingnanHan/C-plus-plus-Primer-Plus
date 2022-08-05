// usebrass2.cpp -- polymorphic example
// compile with brass.cpp
#include <iostream>
#include <string>
#include "dma2.h"
const int CLIENTS = 3;

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    ABC* p_clients[CLIENTS];
    char temp[40];
    char tcolor[40];
    char tstyle[40];

    int tempnum; //rating
    int kind;

    for (int i = 0; i < CLIENTS; i++)
    {
        cout << "Enter label: \n";
        cin.getline(temp, 40);
        cout << "Enter rating: \n";
        cin >> tempnum;

        cout << "Enter 1 for baseDMA, 2 for lacksDMA, or 3 for hasDMA:";
        cin >> kind;
        while (kind != 1 && kind != 2 && kind != 3)
        {
            cout << "Enter either 1, 2 or 3: ";
            cin >> kind;
        }

        if (kind == 1)
        {
            p_clients[i] = new baseDMA(temp, tempnum);
        }
        else if (kind == 2)
        {
            cout << "Enter color: \n";
            cin >> tcolor;
            //cin.getline(tcolor, 40);
            p_clients[i] = new lacksDMA(tcolor, temp, tempnum);
        }
        else
        {
            cout << "Enter style: \n";
            cin >> tstyle;
            //cin.getline(tstyle, 40);
            p_clients[i] = new hasDMA(tstyle, temp, tempnum);
        }
        while (cin.get() != '\n')
            continue;
    }
    cout << endl;
    for (int i = 0; i < CLIENTS; i++)
    {
        p_clients[i]->View();
    }

    for (int i = 0; i < CLIENTS; i++)
    {
        delete p_clients[i];  // free memory
    }
    cout << "------------------------\n";

    baseDMA base1("01", 1);
    baseDMA base2 = base1;
    cout << base1 << base2;
    cout << "------------------------\n";

    lacksDMA lacks1("red", "02", 2);
    lacksDMA lacks2 = lacks1;
    cout << lacks1 << lacks2;
    cout << "------------------------\n";

    hasDMA has1("happy!", "03", 3);
    hasDMA has2 = has1;
    cout << has1 << has2;
    cout << "------------------------\n";

    cout << "Done.\n";
    /* code to keep window open
      if (!cin)
         cin.clear();
      while (cin.get() != '\n')
         continue;
   */
    return 0;
}
