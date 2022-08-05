
#include <iostream>
#include <fstream>
#include <cstdlib>

int main(int argc, char* argv[])
{
    using namespace std;
    ifstream fin;
    ofstream fout;
    char ch;
    fin.open(argv[1]);
    fout.open(argv[2]);
    if (!fin.is_open())
    {
        cerr << "Can't open " << argv[1] << endl;
        fin.clear();
        system("pause");
        exit(EXIT_FAILURE);
    }
    if (!fout.is_open())
    {
        cerr << "Can't open " << argv[2] << endl;
        fout.close();
        system("pause");
        exit(EXIT_FAILURE);
    }
    cout << "Open files successfully.\n";
    cout << "Begin to copy and paste.\n";
    while (fin.get(ch))
    {
        fout << ch;
    }
    fin.clear();
    fin.close();
    fout.close();
    cout << "Copy and paste successfully.\nBye.\n";
    system("pause");
    return 0;
}
