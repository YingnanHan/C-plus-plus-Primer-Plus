#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
class person//总结了下 get方法是修改当前类型的对象的数据成员 set方法是修改继承到的数据成员与当前类型的数据成员 data与show也是如此
{
private:
	string fname;
	string lname;
protected:
	void data(void) const;
	void get(void);
public:
	person(const char* s, const char* t) : fname(s), lname(t) {}
	person(void) : fname("none"), lname("none") {}
	person(const person& p) : fname(p.fname), lname(p.lname) {}
	virtual void show(void) const = 0;
	virtual void set(void) = 0;
};
class Gunslinger : virtual public person
{
private:
	int count;
protected:
	void data(void) const;
	void get(void);
public:
	Gunslinger(void) : person(), count(0) {}
	Gunslinger(const char* f, const char* l, int c = 0) : person(f, l), count(0) {}
	Gunslinger(const person& pr, int c = 0) : person(pr), count(c) {}
	void set(void);
	void show(void) const;
	double Draw(void) const;
};
class pokerplayer : virtual public person
{
protected:
	void data(void) const;
public:
	pokerplayer(void) : person() {}
	pokerplayer(const char* s, const char* t) : person(s, t) {}
	pokerplayer(const person& pr) : person(pr) {}
	void set(void);
	void show(void) const;
	int Draw(void) const;
};
class baddude : public pokerplayer, public Gunslinger
{
protected:
	void data(void) const;
	void get(void);
public:
	baddude(void) : person(), Gunslinger(), pokerplayer() {}
	baddude(const char* f, const char* l, int c) : person(f, l), Gunslinger(f, l, c), pokerplayer(f, l) {}
	baddude(int c, const person& p) : person(p), Gunslinger(p, c), pokerplayer(p) {}
	void set(void);
	void show(void) const;
	double Gdraw(void) const;
	int Cdraw(void) const;
};
#endif
