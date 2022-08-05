

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

int main()
{
    using namespace std;
    ifstream fin1, fin2;
    ofstream fout;
    fin1.open("input1.txt");
    fin2.open("input2.txt");
    fout.open("output.txt");
    if (!fin1.is_open())
    {
        cerr << "Can't open the input1.txt.\nBye.\n";
        fin1.clear();
        fin2.clear();
        fout.close();
        system("pause");
        exit(EXIT_FAILURE);
    }
    if (!fin2.is_open())
    {
        cerr << "Can't open the input2.txt.\nBye.\n";
        fin1.clear();
        fin2.clear();
        fout.close();
        system("pause");
        exit(EXIT_FAILURE);
    }
    if (!fout.is_open())
    {
        cerr << "Can't open the output.txt.\nBye.\n";
        fin1.clear();
        fin2.clear();
        fout.close();
        system("pause");
        exit(EXIT_FAILURE);
    }
    cout << "Open files successfully.\n";
    cout << "Begin to read and write.\n";
    string input1, input2;
    int count1, count2, count_total;
    count1 = 0;
    count2 = 0;
    while (getline(fin1, input1))
    {
        count1++;
    }
    while (getline(fin2, input2))
    {
        count2++;
    }
    count_total = (count1 >= count2 ? count2 : count1);
    fin1.clear();
    fin2.clear();
    fin1.close();
    fin2.close();
    fin1.open("input1.txt");
    fin2.open("input2.txt");
    if (!fin1.is_open())
    {
        cerr << "Can't open the input1.txt.\nBye.\n";
        fin1.clear();
        fin2.clear();
        fout.close();
        system("pause");
        exit(EXIT_FAILURE);
    }
    if (!fin2.is_open())
    {
        cerr << "Can't open the input2.txt.\nBye.\n";
        fin1.clear();
        fin2.clear();
        fout.close();
        system("pause");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < count_total; i++)
    {
        getline(fin1, input1);
        getline(fin2, input2);
        fout << input1 << " " << input2 << endl;
    }
    if (count1 >= count2)
    {
        for (int j = count_total; j < count1; j++)
        {
            getline(fin1, input1);
            fout << input1 << endl;
        }
    }
    else
    {
        for (int j = count_total; j < count1; j++)
        {
            getline(fin2, input2);
            fout << input2 << endl;
        }
    }
    cout << "Task completed.\nBye.\n";
    system("pause");
    return 0;
}
