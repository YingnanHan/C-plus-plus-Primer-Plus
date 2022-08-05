// emp.cpp -- contains the functions' definition

#include <iostream>
#include <string>
#include <fstream>
#include "emp.h"
using namespace std;

abstr_emp::abstr_emp()
{
    fname = "None";
    lname = "None";
    job = "None";
}

abstr_emp::abstr_emp(const std::string& fn, const std::string& ln, const std::string& j)
{
    fname = fn;
    lname = ln;
    job = j;
}

void abstr_emp::ShowAll() const
{
    cout << "First name: " << fname << endl;
    cout << "Last name: " << lname << endl;
    cout << "Job: " << job << endl;
}

void abstr_emp::SetAll()
{
    cout << "Please enter the first name: ";
    getline(cin, fname);
    cout << "Please enter the last name: ";
    getline(cin, lname);
    cout << "Please enter the job: ";
    getline(cin, job);
}

void abstr_emp::setall(std::ifstream& fin)
{
    getline(fin, fname);
    getline(fin, lname);
    getline(fin, job);
}

void abstr_emp::writeall(std::ofstream& fout)
{
    fout << fname << endl << lname << endl << job << endl;
}

std::ostream& operator<<(std::ostream& os, const abstr_emp& e)
{
    os << endl;
    os << "First name: " << e.fname << endl;
    os << "Last name : " << e.lname << endl;
    return os;
}

abstr_emp::~abstr_emp()
{
}

employee::employee() : abstr_emp()
{
}

employee::employee(const std::string& fn, const std::string& ln, const std::string& j) : abstr_emp(fn, ln, j)
{
}

void employee::ShowAll() const
{
    cout << "\nEmployee: " << endl;
    abstr_emp::ShowAll();
}

void employee::SetAll()
{
    cout << "Employee: " << endl;
    abstr_emp::SetAll();
}

void employee::setall(std::ifstream& fin)
{
    abstr_emp::setall(fin);
}

void employee::writeall(std::ofstream& fout)
{
    fout << Employee << endl;
    abstr_emp::writeall(fout);
}

manager::manager() : abstr_emp()
{
    inchargeof = 0;
}

manager::manager(const std::string& fn, const std::string& ln, const std::string& j, int ico) : abstr_emp(fn, ln, j), inchargeof(ico)
{
}

manager::manager(const abstr_emp& e, int ico) : abstr_emp(e), inchargeof(ico)
{
}

manager::manager(const manager& m) : abstr_emp(m)
{
    inchargeof = m.inchargeof;
}

void manager::ShowAll() const
{
    cout << "\nManager: " << endl;
    abstr_emp::ShowAll();
    cout << "In charge of " << inchargeof << " employees.\n";
}

void manager::SetAll()
{
    cout << "Manager: " << endl;
    abstr_emp::SetAll();
    cout << "In charge of: ";
    cin >> inchargeof;
    cin.ignore();
}

void manager::setall(std::ifstream& fin)
{
    abstr_emp::setall(fin);
    fin >> inchargeof;
    fin.ignore();
}

void manager::writeall(std::ofstream& fout)
{
    fout << Manager << endl;
    abstr_emp::writeall(fout);
    fout << inchargeof << endl;
}

fink::fink() : abstr_emp()
{
    reportsto = "None";
}

fink::fink(const std::string& fn, const std::string& ln, const std::string& j, const std::string& rpo) : abstr_emp(fn, ln, j), reportsto(rpo)
{
}

fink::fink(const abstr_emp& e, const std::string& rpo) : abstr_emp(e), reportsto(rpo)
{
}

fink::fink(const fink& f) : abstr_emp(f)
{
    reportsto = f.reportsto;
}

void fink::ShowAll() const
{
    cout << "\nFink: " << endl;
    abstr_emp::ShowAll();
    cout << "Reports to: " << reportsto << endl;
}

void fink::SetAll()
{
    cout << "Fink: " << endl;
    abstr_emp::SetAll();
    cout << "Reports to: ";
    getline(cin, reportsto);
}

void fink::setall(std::ifstream& fin)
{
    abstr_emp::setall(fin);
    fin >> reportsto;
    fin.ignore();
}

void fink::writeall(std::ofstream& fout)
{
    fout << Fink << endl;
    abstr_emp::writeall(fout);
    fout << reportsto << endl;
}

highfink::highfink() : abstr_emp(), manager(), fink()
{
}

highfink::highfink(const std::string& fn, const std::string& ln, const std::string& j, const std::string& rpo, int ico) : abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo)
{
}

highfink::highfink(const abstr_emp& e, const std::string& rpo, int ico) : abstr_emp(e), manager(e, ico), fink(e, rpo)
{
}

highfink::highfink(const fink& f, int ico) : abstr_emp(f), manager(f, ico), fink(f)
{
}

highfink::highfink(const manager& m, const std::string& rpo) : abstr_emp(m), manager(m), fink(m, rpo)
{
}

highfink::highfink(const highfink& h) : abstr_emp(h), manager(h), fink(h)
{
}

void highfink::ShowAll() const
{
    cout << endl;
    cout << "Highfink: " << endl;
    abstr_emp::ShowAll();
    cout << "In charge of: " << manager::InChargeOf() << endl;
    cout << "Reports to: " << fink::ReportsTo() << endl;
    cout << endl;
}

void highfink::SetAll()
{
    cout << "Highfink: " << endl;
    abstr_emp::SetAll();
    cout << "In charge of: ";
    cin >> manager::InChargeOf();
    cin.ignore();
    cout << "Reports to: ";
    getline(cin, fink::ReportsTo());
}

void highfink::setall(std::ifstream& fin)
{
    abstr_emp::setall(fin);
    fin >> manager::InChargeOf();
    fin.ignore();
    fin >> fink::ReportsTo();
    fin.ignore();
}

void highfink::writeall(std::ofstream& fout)
{
    fout << Highfink << endl;
    abstr_emp::writeall(fout);
    fout << manager::InChargeOf() << endl;
    fout << fink::ReportsTo() << endl;
}