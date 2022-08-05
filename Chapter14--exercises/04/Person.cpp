#include "Person.h"
void person::data(void) const
{
    cout << "fname: " << fname << endl;
    cout << "lname: " << lname << endl;
}
void person::get(void)
{
    cout << "Enter fname: ";
    getline(cin, fname);
    cout << "Enter lname: ";
    getline(cin, lname);
}
void person::show(void) const
{
    data();
}
void person::set(void)
{
    get();
}

void Gunslinger::data(void) const
{
    cout << "count: " << count << endl;
    cout << "Time: " << Draw() << endl;
}
void Gunslinger::get(void)
{
    cout << "Enter count: ";
    cin >> count;
    while (cin.get() != '\n')
        continue;
}
void Gunslinger::set(void)
{
    person::get();
    get();
}
void Gunslinger::show(void) const
{
    person::data();
    data();
}
double Gunslinger::Draw(void) const
{
    return rand() % 3 + 1;
}

void pokerplayer::data(void) const
{
    cout << "µãÊýÎª: " << Draw() << endl;
}
void pokerplayer::set(void)
{
    person::get();
}
void pokerplayer::show(void) const
{
    person::data();
    data();
}
int pokerplayer::Draw(void) const
{
    return rand() % 51 + 1;
}

void baddude::set(void)
{
    person::get();
    Gunslinger::get();
}
void baddude::show(void) const
{
    person::data();
    Gunslinger::data();
    pokerplayer::data();
}
double baddude::Gdraw(void) const
{
    return Gunslinger::Draw();
}
int baddude::Cdraw(void) const
{
    return pokerplayer::Draw();
}
