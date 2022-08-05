

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

int main(int argc, char* argv[])
{
    using namespace std;
    ofstream fout;
    for (int file = 1; file < argc; file++)
    {
        fout.open(argv[file]);
        if (!fout.is_open())
        {
            cerr << "Can't open " << argv[file] << endl;
            system("pause");
            exit(EXIT_FAILURE);
        }
        cout << "Please enter your input (enter a blank line to quit): \n";
        string input;
        while (getline(cin, input) && input.size() > 0)
            fout << input << endl;
        cout << "Input over.\nBye.\n";
        fout.close();
    }
    system("pause");
    return 0;
}
