#include "emp.h"
abstr_emp::abstr_emp() : fname("none"), lname("none"), job("none") {}
abstr_emp::abstr_emp(const std::string& fn, const std::string& ln, const std::string& j) : fname(fn), lname(ln), job(j) {}
void abstr_emp::Showall()const
{
    cout << "fname: " << fname << endl;
    cout << "lname: " << lname << endl;
    cout << "job: " << job << endl;
}
void abstr_emp::Setall()
{
    cout << "Enter fname: ";
    getline(cin, fname);
    cout << "Enter lname: ";
    getline(cin, lname);
    cout << "Enter job: ";
    getline(cin, job);
}
ostream& operator<<(ostream& os, const abstr_emp& e)
{
    os << "fname: " << e.fname << endl;
    os << "lname: " << e.lname << endl;
    os << "job: " << e.job << endl;
    return os;
}
abstr_emp::~abstr_emp() {}

employee::employee() {}
employee::employee(const std::string& fn, const std::string& ln, const std::string& j) : abstr_emp(fn, ln, j) {}
void employee::Showall()const
{
    abstr_emp::Showall();
}
void employee::Setall()
{
    abstr_emp::Setall();
}

manager::manager() : inchargeof(0) {}
manager::manager(const std::string& fn, const std::string& ln, const std::string& j, int ico) : inchargeof(ico), abstr_emp(fn, ln, j) {}
manager::manager(const abstr_emp& e, int ico) : abstr_emp(e), inchargeof(ico) {}
manager::manager(const manager& m) : abstr_emp(m), inchargeof(m.inchargeof) {}
void manager::Showall()const
{
    abstr_emp::Showall();
    cout << "inchargeof: " << inchargeof << endl;
}
void manager::Setall()
{
    abstr_emp::Setall();
    cout << "Enter inchargeof: ";
    cin >> inchargeof;
    while (cin.get() != '\n')
        continue;
}

fink::fink() : reportsto("none") {}
fink::fink(const std::string& fn, const std::string& ln, const std::string& j, const std::string& rpo) : abstr_emp(fn, ln, j), reportsto(rpo) {}
fink::fink(const abstr_emp& e, const std::string rpo) : abstr_emp(e), reportsto(rpo) {}
fink::fink(const fink& e) : abstr_emp(e), reportsto(e.reportsto) {}
void fink::Showall()const
{
    abstr_emp::Showall();
    cout << "reportsto: " << reportsto << endl;
}
void fink::Setall()
{
    abstr_emp::Setall();
    cout << "Enter reportsto: ";
    getline(cin, reportsto);
}

highfink::highfink() {}
highfink::highfink(const std::string& fn, const std::string& ln, const std::string& j, std::string& rpo, int ico) : abstr_emp(fn, ln, j), fink(fn, ln, j, rpo), manager(fn, ln, j, ico) {}
highfink::highfink(const abstr_emp& e, const std::string& rpo, int ico) : abstr_emp(e), fink(e, rpo), manager(e, ico) {}
highfink::highfink(const fink& f, int ico) : abstr_emp(f), manager(f, ico), fink(f) {}
highfink::highfink(const manager& m, const std::string& rpo) : abstr_emp(m), manager(m), fink(m, rpo) {}
highfink::highfink(const highfink& h) : abstr_emp(h), manager(h), fink(h) {}
void highfink::Showall()const
{
    manager::Showall();
    fink::Showall();
}
void highfink::Setall()
{
    manager::Setall();
    fink::Setall();
}
