// error4.cpp -- using exception classes

#include <iostream>
#include <cmath>
#include <stdexcept>
#include <string>
using namespace std;
class bad_hmean : public logic_error
{
private:
    string name;
    double v1;
    double v2;
public:
    explicit bad_hmean(const string& n = "hmean", const string& s = "Error in hmean()\n", double a = 0, double b = 0);
    void mesg();
    const char* what() { return "bad arguments in hmean()\n"; }
    virtual ~bad_hmean() throw() {}
};

bad_hmean::bad_hmean(const string& n, const string& s, double a, double b) : name(n), logic_error(s), v1(a), v2(b) {}
inline void bad_hmean::mesg()
{
    cout << "hmean (" << v1 << ", " << v2 << "): " << "invalid arguments: a = -b\n";
}

class bad_gmean : public logic_error
{
private:
    string name;
public:
    double v1;
    double v2;
    explicit bad_gmean(const string& n = "gmean", const string& s = "Error in gmean()\n", double a = 0, double b = 0);
    const char* mesg();
    const char* what() { return  "bad arguments in gmean()\n"; }
    virtual ~bad_gmean() throw() {}
};

bad_gmean::bad_gmean(const string& n, const string& s, double a, double b) : name(n), logic_error(s), v1(a), v2(b) {}
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
        catch (bad_hmean& bg)
        {
            cout << bg.what();
            cout << "Error message:\n";
            bg.mesg();
            cout << "Try again.\n";
            continue;
        }
        catch (bad_gmean& hg)
        {
            cout << hg.what();
            cout << "Error message:\n";
            cout << hg.mesg();
            cout << "Values used: " << hg.v1 << ", " << hg.v2 << endl;
            cout << "Sorry, you don't get to play any more.\n";
            break;
        }
    }

    cout << "Bye!\n";
    system("pause");
    return 0;
}

double hmean(double a, double b)
{
    if (a == -b)
        throw bad_hmean("hmean", "Error in hmean()\n", a, b);
    return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
    if (a < 0 || b < 0)
        throw bad_gmean("gmean", "Error in gmean()\n", a, b);
    return std::sqrt(a * b);
}