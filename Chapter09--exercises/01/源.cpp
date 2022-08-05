#include<iostream>
#include<iomanip> 
#include"golf.h"
int main()
{
    using namespace std;
    int n, hc;
    golf ann;
    setgolf(ann, "Ann Birdfree", 24);
    showgolf(ann);
    cout << "please input the nums which you want to log: ";
    cin >> n;
    cin.get();
    golf* g = new golf[n + 1];
    for (int i = 0; i < n; ++i) {
        cout << "#" << i + 1 << endl;
        setgolf(g[i]);
        showgolf(g[i]);
    }
    system("pause");
    return 0;
}