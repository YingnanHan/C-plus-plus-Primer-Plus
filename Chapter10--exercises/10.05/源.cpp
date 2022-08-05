#include<iostream>

struct customer {
	char fullname[35];
	double payment;
};
typedef customer Item;
class Stack {
private:
	enum { MAX = 10 };
	Item items[MAX];
	int top;
public:
	Stack();
	bool isempty()const;
	bool isfull()const;
	bool push(const Item& item);
	bool pop(Item& item);
};


Stack::Stack() { top = 0; }
bool Stack::isempty()const {
	return top == 0;
}
bool Stack::isfull()const {
	return top == MAX;
}
bool Stack::push(const Item& item) {
	if (top < MAX) {
		items[top++] = item;
		return true;
	}
	else
		return false;
}
bool Stack::pop(Item& item) {
	static double total = 0;
	if (top > 0) {
		item = items[--top];
		total += item.payment;
		std::cout << "The total payment is: " << total << std::endl;
		return true;
	}
	else return false;
}

int main() {
	Stack stack;
	customer c[5]{
		{"yue",120},
		{"yue yeui",500},
		{"yue aishai",200.5},
		{"yue yue",101},
		{"yue ",82.3}
	};
	for (int i = 0; i < 5; i++)
		stack.push(c[i]);
	for (int i = 4; i >= 0; i--)
		stack.pop(c[i]);
	return 0;
}
