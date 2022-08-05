// usestack.cpp -- tetsing the Stack class

#include <iostream>
#include <cctype>
#include "stack.h"


int main()
{
    using namespace std;
    Stack st;
    char ch;
    unsigned long po;
    cout << "Please enter A to add a purchase order,\n" << "P to process a PO, Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch (ch)
        {
        case 'A':
        case 'a': cout << "Enter a PO number to add: ";
            cin >> po;
            if (st.isfull())
                cout << "stack already full.\n";
            else
                st.push(po);
            break;
        case 'p':
        case 'P': if (st.isempty())
            cout << "stack already empty.\n";
                else
        {
            st.pop(po);
            cout << "PO #" << po << " popped.\n";
        }
                break;
        }
        cout << "Please enter A to add a purchase order,\n" << "P to process a PO, or Q to quit.\n";
    }
    cout << "So our stack is:\n" << st;
    Stack st2;
    st2 = st;
    cout << "stack2 = stack is:\n" << st2;
    cout << "Bye\n";
    system("pause");
    return 0;
}