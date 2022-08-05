// queue.cpp -- Queue and Customer methods

#include"queue.h"
#include<cstdlib>

// Queue methods
Queue::Queue(int qs) : qsize(qs)
{
	front = rear = nullptr;	// or NULL
	items = 0;
}

Queue::~Queue()
{
	Node* temp;
	while (front != NULL)	// while queue is not yet empty
	{
		temp = front;		// save address of front of item
		front = front->next;// reset pointer to next item
		delete temp;		// delete former front
	}
}

bool Queue::isempty() const
{
	return items == 0;
}

bool Queue::isfull() const
{
	return items == qsize;
}

int Queue::queuecount() const
{
	return items;
}

//Add item to queue
bool Queue::enqueue(const Item& item)
{
	if (isfull())
	{
		return false;
	}
	Node* add = new Node;
	add->item = item;
	add->next = nullptr;
	items++;
	if (front == NULL)
	{
		front = add;
	}
	else
	{
		rear->next = add;
	}
	rear = add;
	return true;
}

bool Queue::dequeue(Item& item)
{
	if (front == NULL)
	{
		return false;
	}
	item = front->item;
	items--;
	Node* temp = front;
	front = front->next;
	delete temp;
	if (items == 0)
	{
		return NULL;
	}
	return true;
}

void Customer::set(long when)
{
	processtime = std::rand() % 3 + 1;
	arrive = when;
}