// error4.cpp -- using exception classes

#include <iostream>
#include <cmath>
#include <stdexcept>
#include <string>
using namespace std;

class bad : public logic_error
{
public:
    string name;
    double v1;
    double v2;
    explicit bad(const string& n, const string& s, double a = 0, double b = 0);
    void mesg();
    virtual ~bad() throw() {}
};

bad::bad(const string& n, const string& s, double a, double b) : name(n), logic_error(s), v1(a), v2(b) {}
inline void bad::mesg()
{
    cout << "Error happened!\n";
}

class bad_hmean : public bad
{
public:
    explicit bad_hmean(const string& n = "hmean", const string& s = "Error in hmean()\n", double a = 0, double b = 0);
    void mesg();
    const char* what() { return "bad arguments in hmean()\n"; }
    virtual ~bad_hmean() throw() {}
};

bad_hmean::bad_hmean(const string& n, const string& s, double a, double b) : bad(n, s, a, b) {}
inline void bad_hmean::mesg()
{
    cout << "hmean (" << v1 << ", " << v2 << "): " << "invalid arguments: a = -b\n";
}

class bad_gmean : public bad
{
public:
    explicit bad_gmean(const string& n = "gmean", const string& s = "Error in gmean()\n", double a = 0, double b = 0);
    const char* mesg();
    const char* what() { return "bad arguments in gmean()\n"; }
    virtual ~bad_gmean() throw() {}
};

bad_gmean::bad_gmean(const string& n, const string& s, double a, double b) : bad(n, s, a, b) {}
inline const char* bad_gmean::mesg()
{
    return "gmean() arguments should be >= 0\n";
}

double hmean(double a, double b);
double gmean(double a, double b);

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    double x, y, z;

    cout << "Enter two numbers: ";
    while (cin >> x >> y)
    {
        try
        {
            z = hmean(x, y);
            cout << "Harmonic mean of " << x << " and " << y << " is " << z << endl;
            cout << "Geometric mean of " << x << " and " << y << " is " << gmean(x, y) << endl;
            cout << "Enter next set of two numbers <q to quit>: ";
        }
        catch (bad& b)
        {
            b.mesg();
            if (b.name == "hmean")
            {
                cout << ((bad_hmean&)b).what();
                cout << "Error message: ";
                ((bad_hmean&)b).mesg();
                cout << "Sorry, you don't get to play any more.\n";
                break;
            }
            else if (b.name == "gmean")
            {
                cout << ((bad_gmean&)b).what();
                cout << "Error message: ";
                cout << ((bad_gmean&)b).mesg();
                cout << "Values used: " << ((bad_gmean&)b).v1 << ", " << ((bad_gmean&)b).v2 << endl;
                cout << "Sorry, you don't get to play any more.\n";
                break;
            }
            else
            {
                cout << "Input error.\nTerminated.\n";
                system("pause");
                exit(EXIT_FAILURE);
            }
        }
    }

    cout << "Bye!\n";
    system("pause");
    return 0;
}

double hmean(double a, double b)
{
    if (a == -b)
        throw bad("hmean", "Error in hmean()\n", a, b);
    return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
    if (a < 0 || b < 0)
        throw bad("gmean", "Error in gmean()\n", a, b);
    return std::sqrt(a * b);
}