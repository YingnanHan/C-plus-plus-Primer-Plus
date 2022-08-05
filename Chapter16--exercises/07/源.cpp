#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
vector<int> Lotto(int cnum, int rnum);

int main()
{
    vector<int> winners;
    winners = Lotto(51, 6);
    cout << "Winner's number:\n";
    for (auto i = winners.begin(); i != winners.end(); i++)
        cout << *i << " ";
    cout << endl;

    return 0;
}

vector<int> Lotto(int cnum, int rnum)
{
    vector<int> ticket(cnum);
    for (int i = 0; i < cnum; i++)
        ticket[i] = i + 1;
    random_shuffle(ticket.begin(), ticket.end());
    vector<int> choose(rnum);
    for (int i = 0; i < rnum; i++)
        choose[i] = ticket[i];
    sort(choose.begin(), choose.end());

    return choose;
}