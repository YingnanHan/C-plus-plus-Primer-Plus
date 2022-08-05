// stacktp.h -- a stack template
#ifndef STACKTP_H_
#define STACKTP_H_

template <typename T>
class Stack
{
private:
	enum
	{
		MAX = 10,
	};
	T items[MAX];
	int top;
public:
	Stack();
	bool isempty();
	bool isfull();
	bool push(const T& item);
	bool pop(T& item);
};

template<typename T>
Stack<T>::Stack()
{
	top = 0;
}

template<typename T>
bool Stack<T>::isempty()
{
	return top == 0;
}

template<typename T>
bool Stack<T>::isfull()
{
	return top == MAX;
}

template<typename T>
bool Stack<T>::push(const T& item)
{
	if (top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else
	{
		return false;
	}
}

template<typename T>
bool Stack<T>::pop(T& item)
{
	if (top > 0)
	{
		item = items[--top];
		return true;
	}
	else
	{
		return false;
	}
}

#endif STACKTP_H_