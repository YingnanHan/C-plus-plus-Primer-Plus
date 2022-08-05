

#include <iostream>
#include <fstream>
#include <set>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <iterator>

int main()
{
    using namespace std;
    ifstream fin1, fin2;
    fin1.open("mat.dat");
    fin2.open("pat.dat");
    if (!fin1.is_open())
    {
        cerr << "Can't open the file mat.dat.\nBye.\n";
        system("pause");
        exit(EXIT_FAILURE);
    }
    if (!fin2.is_open())
    {
        cerr << "Can't open the file pat.dat.\nBye.\n";
        system("pause");
        exit(EXIT_FAILURE);
    }
    ofstream fout;
    fout.open("matnpat.dat");
    if (!fout.is_open())
    {
        cerr << "Can't open the file matnpat.dat.\nBye.\n";
        system("pause");
        exit(EXIT_FAILURE);
    }
    string temp;
    set<string> mat, pat, matnpat;
    while (getline(fin1, temp))
        mat.insert(temp);
    ostream_iterator<string, char> output(cout, "\n");
    cout << "Mat's friends are: \n";
    copy(mat.begin(), mat.end(), output);
    while (getline(fin2, temp))
        pat.insert(temp);
    cout << "\nPat's friends are: \n";
    copy(pat.begin(), pat.end(), output);
    ostream_iterator<string, char> out(fout, "\n");
    set_union(mat.begin(), mat.end(), pat.begin(), pat.end(), insert_iterator<set<string> >(matnpat, matnpat.begin()));
    cout << "\nSo Mat and Pat's friends in total are: \n";
    copy(matnpat.begin(), matnpat.end(), output);
    copy(matnpat.begin(), matnpat.end(), out);
    system("pause");
    return 0;
}
