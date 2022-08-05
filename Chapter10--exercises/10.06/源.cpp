#include<iostream>

class Move {
private:
	double x;
	double y;
public:
	Move(double a = 0, double b = 0);
	void showmove()const;
	Move add(const Move& m)const;
	void reset(double a = 0, double b = 0);
};


Move::Move(double a, double b) {
	x = a;
	y = b;
}
void Move::showmove()const {
	std::cout << "x = " << x << ", y = " << y << std::endl;
}
Move Move::add(const Move& m)const {
	Move mm;
	mm.x = x + m.x;
	mm.y = y + m.y;
	return mm;
}
void Move::reset(double a, double b) {
	x = a;
	y = b;
}

int main() {
	Move m1(1.1, 2.2);
	m1.showmove();
	Move m2(2.2, 3.3);
	m2.showmove();
	Move m3;
	m3 = m2.add(m1);
	m3.showmove();
	m3.reset(10, 11);
	m3.showmove();
	return 0;
}