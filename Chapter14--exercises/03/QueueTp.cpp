#include "QueueTp.h"
template <typename T>
QueueTp<T>::QueueTp(int s) : size(s)
{
    f = l = nullptr;
    present = 0;
}
template <typename T>
QueueTp<T>::~QueueTp(void)
{
    delete[] f;
    l = NULL;
}
template <typename T>
bool QueueTp<T>::isempty(void) const
{
    return present == 0;
}
template <typename T>
bool QueueTp<T>::isfull(void) const
{
    return present == size;
}
template <typename T>
int QueueTp<T>::count(void) const
{
    return present;
}
template <typename T>
bool QueueTp<T>::enqueue(const T& w)
{
    if (isfull())
        return false;
    T* temp = new Node;
    temp->item = w;
    temp->n = NULL;
    if (present == 0)
    {
        l = temp;
        f = temp;
    }
    l->n = temp;
    l = l->n;
    present++;
    return true;
}
template <typename T>
bool QueueTp<T>::dequeue(T& w)
{
    if (isempty())
        return false;
    w = f->item;
    T* temp = f;
    f = f->n;
    delete temp;
    present--;
    if (present == 0)
        l = nullptr;
    return true;
}
void Worker::set(void)
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter id: ";
    cin >> id;
}
void Worker::show(void) const
{
    cout << "name: " << name << " id: " << id << endl;
}
