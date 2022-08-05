
#include<iostream>

using namespace std;

const int MAX = 5;
struct people {
	char name[30];
	int age;
};
typedef people Item;
class List {
private:
	Item items[MAX];
	int head;
	int tail;
public:
	List();
	bool add(Item& item);
	bool get(Item& item);
	void visit(void(*pf)(Item&));
	void show()const;
};
void agedouble(Item&);

List::List() {
	for (int i = 0; i < 5; i++)
		items[i] = { "NONE",0 };
	head = 0;
	tail = 0;
}
bool List::add(Item& item) {
	if ((tail + 1) % MAX == head) {
		cout << "The list is fall!\n";
		return false;
	}
	else {
		items[tail] = item;
		tail = (tail + 1) % MAX;
	}
	return true;
}
bool List::get(Item& item) {
	if (tail == head) {
		cout << "The list is empty!\n";
		return false;
	}
	else {
		item = items[head];
		items[head] = { "NONE",0 };
		head = (head + 1) % MAX;
	}
	return true;
}
void List::visit(void(*pf)(Item&)) {
	for (int i = 0; i < MAX; i++)
		(*pf)(items[i]);
}
void List::show()const {
	for (int i = 0; i < MAX; i++)
		cout << "items[" << i << "]= " << items[i].name
		<< ", " << items[i].age << endl;
	cout << endl;
}
void agedouble(Item& item) {
	item.age *= 2;
}

int main() {
	using std::cout;
	using std::endl;
	List list;
	people p[5]{
		{"yue",12},
		{"yuei",13},
		{"yues",10},
		{"yuea",20},
		{"yuejs",18}
	};
	for (int i = 0; i < 5; i++) {// 队列只能读取四个元素，需要一个空间作为队满的判断
		list.add(p[i]);
		cout << p[i].name << "    " << p[i].age << endl;
	}
	list.show();
	void (*pdouble)(Item&) = agedouble;
	list.visit(pdouble);
	list.show();
	for (int i = 4; i >= 0; i--) {
		list.get(p[i]);
		cout << p[i].name << "    " << p[i].age << endl;
	}cout << endl;
	list.show();

	return 0;
}