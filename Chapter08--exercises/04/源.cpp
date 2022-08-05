
#include <iostream>
#include <cstring>
using namespace std;

struct stringy
{
    char* str;
    int ct;
};

void set(stringy& st, const char* x);
void show(stringy& st, const int n = 1);
void show(const char* x, const int n = 1);

int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
    system("pause");
    return 0;
}

void set(stringy& st, const char* x)
{
    st.ct = strlen(x) + 1;
    st.str = new char[st.ct];
    strcpy_s(st.str, st.ct, x);
}

void show(stringy& st, const int n)
{
    for (int i = 0; i < n; i++)
        cout << st.str << endl;
    cout << endl;
}

void show(const char* x, const int n)
{
    for (int i = 0; i < n; i++)
        cout << x << endl;
    cout << endl;
}