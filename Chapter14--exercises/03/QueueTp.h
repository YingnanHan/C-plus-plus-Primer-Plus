#ifndef QUEUETP_H
#define QUEUETP_H
#include <iostream>
#include <string>
using namespace std;
template <typename T>
class QueueTp
{
private:
    struct Node
    {
        T item;
        Node* n;
    };
    Node* f;
    Node* l;
    int present;
    cosnt int size;
public:
    QueueTp(int s = 10);
    ~QueueTp(void);
    bool isempty(void) const;
    bool isfull(void) const;
    int count(void) const;
    bool enqueue(const T&);
    bool dequeue(T&);
};
class Worker
{
private:
    string name;
    int id;
public:
    Worker(void) : name("none"), id(0) {}
    Worker(const string& s, int n) : name(s), id(n) {}
    ~Worker(void) {}
    void set(void);
    void show(void) const;
};
#endif
