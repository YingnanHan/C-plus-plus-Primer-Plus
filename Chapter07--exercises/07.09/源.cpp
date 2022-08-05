#include <iostream>
using namespace std;
const int SLEN = 30;
struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student* ps);
void display3(const student pa[], int n);

int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
    {
        continue;
    }
    student* ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete[] ptr_stu;
    cout << "Done\n";
    return 0;
}

int getinfo(student pa[], int n)
{
    int result = 0;
    for (int i = 1; i <= n; i++)
    {
        cout << "student #" << i << ": " << endl;
        cout << "fullname: ";
        cin.getline(pa[i].fullname, SLEN);
        if (pa[i].fullname[0] == '\0') //判断空行
            break;
        cout << "hobby: ";
        cin.getline(pa[i].hobby, SLEN);
        cout << "ooplevel: ";
        (cin >> pa[i].ooplevel).get();
        //本循环会给下一个循环留一个回车读取到fullname,所以调用cin.get()读取到这个回车键,这样就不会给下fullname.
        ++result;
    }
    cout << "Enter End.\n";
    return result;
}

void display1(student st)
{
    cout << "display1:\n";
    cout << "fullname:" << st.fullname << " hobby:" << st.hobby << " ooplevel:" << st.ooplevel << endl;
}

void display2(const student* ps)
{
    cout << "display2:\n";
    cout << "fullname:" << ps->fullname << " hobby:" << ps->hobby << " ooplevel:" << ps->ooplevel << endl;
}

void display3(const student pa[], int n)
{
    cout << "display3:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "fullname:" << pa[i].fullname << " hobby:" << pa[i].hobby << " ooplevel:" << pa[i].ooplevel << endl;
    }
}
