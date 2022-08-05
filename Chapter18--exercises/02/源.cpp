
#include <iostream>
#include <string>

using namespace std;
class Cpmv
{
public:
    struct Info
    {
        string qcode;
        string zcode;
    };
private:
    Info* pi;
public:
    Cpmv();
    Cpmv(string q, string z);
    Cpmv(const Cpmv& cp);
    Cpmv(Cpmv&& mv);
    ~Cpmv();
    Cpmv& operator=(const Cpmv& cp);
    Cpmv& operator=(Cpmv&& mv);
    Cpmv operator+(const Cpmv& obj) const;
    void Display() const;
};

Cpmv::Cpmv()
{
    pi = new Info;
    pi->qcode = "qcode";
    pi->zcode = "zcode";
    cout << "Default constructor called.\n";
}

Cpmv::Cpmv(string q, string z)
{
    pi = new Info;
    pi->qcode = q;
    pi->zcode = z;
    cout << "String constructor called.\n";
}

Cpmv::Cpmv(const Cpmv& cp)
{
    pi = new Info;
    pi->qcode = cp.pi->qcode;
    pi->zcode = cp.pi->zcode;
    cout << "Copy constructor called.\n";
}

Cpmv::Cpmv(Cpmv&& mv)
{
    pi = new Info;
    pi->qcode = mv.pi->qcode;
    pi->zcode = mv.pi->zcode;
    mv.pi->qcode = "qcode";
    mv.pi->zcode = "zcode";
    cout << "Move constructor called.\n";
}

Cpmv::~Cpmv()
{
    delete pi;
    cout << "Deconstructor called.\n";
}

Cpmv& Cpmv::operator=(const Cpmv& cp)
{
    cout << "Copy assignment operator called.\n";
    if (this == &cp)
    {
        return *this;
    }
    delete pi;
    pi = new Info;
    pi->qcode = cp.pi->qcode;
    pi->zcode = cp.pi->zcode;
    return *this;
}

Cpmv& Cpmv::operator=(Cpmv&& mv)
{
    cout << "Move assignment operator called.\n";
    if (this == &mv)
    {
        return *this;
    }
    delete pi;
    pi = new Info;
    pi->qcode = mv.pi->qcode;
    pi->zcode = mv.pi->zcode;
    mv.pi->qcode = "qcode";
    mv.pi->zcode = "zcode";
    return *this;
}

Cpmv Cpmv::operator+(const Cpmv& obj) const
{
    cout << "Plus operator called.\n";
    Cpmv sum;
    sum.pi->qcode = this->pi->qcode + obj.pi->qcode;
    sum.pi->zcode = this->pi->zcode + obj.pi->zcode;
    return sum;
}

void Cpmv::Display() const
{
    cout << "The qcode is " << this->pi->qcode << endl;
    cout << "The zcode is " << this->pi->zcode << endl;
    cout << endl;
}



int main()
{
    Cpmv temp;
    cout << "Object 0:\n";
    temp.Display();

    Cpmv temp1("number one", "number two");
    cout << "Object 1:\n";
    temp1.Display();

    Cpmv temp2(temp);
    cout << "Object 2:\n";
    temp2.Display();

    cout << "Object 3 = Object 1:\n";
    Cpmv temp3;
    temp3 = temp1;
    cout << "Object 3:\n";
    temp3.Display();
    cout << "Object 1:\n";
    temp1.Display();

    cout << "Object 4 = move(Obejct 2):\n";
    Cpmv temp4;
    temp4 = move(temp2);
    cout << "Object 4:\n";
    temp4.Display();
    cout << "Object 2:\n";
    temp2.Display();

    cout << "Obejct 5 = Object 3 + Obejct 4:\n";
    Cpmv temp5 = temp3 + temp4;
    cout << "Obejct 5:\n";
    temp5.Display();


    system("pause");
    return 0;
}
