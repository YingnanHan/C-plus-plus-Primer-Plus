// stack.cpp -- functions' definition

#include <iostream>
using std::endl;
#include "stack.h"

Stack::Stack(int n)
{
    pitems = new Item[n];
    for (int i = 0; i < n; i++)
    {
        pitems[i] = 0;
    }
    top = 0;
    size = n;
}

Stack::Stack(const Stack& st)
{
    pitems = new Item[st.size];
    for (int i = 0; i < st.size; i++)
    {
        pitems[i] = st.pitems[i];
    }
    top = st.top;
    size = st.size;
}

Stack::~Stack()
{
    delete[] pitems;
}

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == MAX;
}

bool Stack::push(const Item& item)
{
    if (top < MAX)
    {
        pitems[top++] = item;
        return true;
    }
    else
        return false;
}

bool Stack::pop(Item& item)
{
    if (top > 0)
    {
        item = pitems[--top];
        return true;
    }
    else
        return false;
}

Stack& Stack::operator=(const Stack& st)
{
    if (this == &st)
        return *this;
    delete[] pitems;
    top = st.top;
    size = st.size;
    pitems = new Item[st.size];
    for (int i = 0; i < st.size; i++)
    {
        pitems[i] = st.pitems[i];
    }
    return *this;
}

ostream& operator<<(ostream& os, const Stack& st)
{
    for (int i = 0; i < st.top; i++)
    {
        os << st.pitems[i] << endl;
    }
    return os;
}