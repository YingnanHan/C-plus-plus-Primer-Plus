#ifndef EMP_H
#define EMP_H
#include <iostream>
#include <string>
using namespace std;
class abstr_emp
{
private:
	std::string fname;
	std::string lname;
	std::string job;
public:
	abstr_emp();
	abstr_emp(const std::string& fn, const std::string& ln, const std::string& j);
	virtual void Showall()const;
	virtual void Setall();
	friend std::ostream& operator<<(std::ostream& os, const abstr_emp& e);
	virtual ~abstr_emp() = 0;
};
class employee :public abstr_emp
{
public:
	employee();
	employee(const std::string& fn, const std::string& ln, const std::string& j);
	virtual void Showall()const;
	virtual void Setall();
};
class manager :virtual public abstr_emp
{
private:
	int inchargeof;
protected:
	int Inchargeof()const { return inchargeof; }
	int& Inchargeof() { return inchargeof; }
public:
	manager();
	manager(const std::string& fn, const std::string& ln, const std::string& j, int ico = 0);
	manager(const abstr_emp& e, int ico = 0);
	manager(const manager& m);
	virtual void Showall()const;
	virtual void Setall();
};
class fink :virtual public abstr_emp
{
private:
	std::string reportsto;
protected:
	const std::string Reportsto()const { return reportsto; }
	std::string& Reportsto() { return reportsto; }
public:
	fink();
	fink(const std::string& fn, const std::string& ln, const std::string& j, const std::string& rpo);
	fink(const abstr_emp& e, const std::string rpo);
	fink(const fink& e);
	virtual void Showall()const;
	virtual void Setall();
};
class highfink : public manager, public fink
{
public:
	highfink();
	highfink(const std::string& fn, const std::string& ln, const std::string& j, std::string& rpo, int ico = 0);
	highfink(const abstr_emp& e, const std::string& rpo, int ico);
	highfink(const fink& f, int ico);
	highfink(const manager& m, const std::string& rpo);
	highfink(const highfink& h);
	virtual void Showall()const;
	virtual void Setall();
};
#endif
