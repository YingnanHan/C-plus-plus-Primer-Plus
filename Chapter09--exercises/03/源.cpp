#include<iostream>
#include<string>
using namespace std;
const int BUF = 50;
const int n = 5;
struct chaff {
    char dross[20];
    int slag;
};
chaff buf[BUF];
int main()
{
    chaff* p1, * p2;
    p1 = new chaff[n];
    p2 = new (buf) chaff[n];
    cout << "please input the p1 info: \n";
    cin.getline(p1->dross, 20);
    cin >> p1->slag;
    char ch[BUF] = "we are the world";
    strcpy_s(p2->dross, strlen(ch) + 1, ch);
    p2->slag = strlen(ch);
    cout << "the new chaff[] form address: " << p1 << " Dross is: " << p1->dross << " Slag is: " << p1->slag << endl;
    cout << "the new chaff[] form address: " << p2 << " Dross is: " << p2->dross << " Slag is: " << p2->slag << endl;
    system("pause");
    return 0;
}