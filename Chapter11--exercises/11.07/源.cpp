
#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>

using namespace std;

class Complex
{
private:
	double real;
	double imaginary;
public:
	Complex();
	Complex(double n1);
	Complex(double n1, double n2);
	~Complex();
	Complex operator+(const Complex& c)const;
	Complex operator-(const Complex& c)const;
	Complex operator*(const Complex& c)const;
	Complex operator*(double n)const;
	Complex operator~()const;
	friend Complex operator*(double n, const Complex& c);
	friend ostream& operator<<(ostream& os, const Complex& c);
	friend istream& operator>>(istream& is, Complex& c);
};


Complex::Complex()
{
	real = 0.0;
	imaginary = 0.0;
}
Complex::Complex(double n1)
{
	real = n1;
	imaginary = 0.0;
}
Complex::Complex(double n1, double n2)
{
	real = n1;
	imaginary = n2;
}
Complex::~Complex()
{
}
Complex Complex::operator+(const Complex& c)const
{
	return Complex(real + c.real, imaginary + c.imaginary);
}
Complex Complex::operator-(const Complex& c)const
{
	return Complex(real - c.real, imaginary - c.imaginary);
}
Complex Complex::operator*(const Complex& c)const
{
	double real_s;
	double imaginary_s;
	real_s = real * c.real - imaginary * c.imaginary;
	imaginary_s = real * c.imaginary + imaginary * c.real;
	return Complex(real_s, imaginary_s);
}
Complex Complex::operator*(double n)const
{
	return Complex(n * real, n * imaginary);
}
Complex Complex::operator~()const
{
	return Complex(real, -imaginary);
}
Complex operator*(double n, const Complex& c)
{
	return Complex(n * c.real, n * c.imaginary);
}
ostream& operator<<(ostream& os, const Complex& c)
{
	os << "(" << c.real << ", " << c.imaginary << "i)";
	return os;
}
istream& operator>>(istream& is, Complex& c)
{
	cout << "Real: ";
	if (is >> c.real)
	{
		cout << "Imaginary: ";
		is >> c.imaginary;
	}
	return is;
}

int main()
{
	Complex a(3.0, 4.0);
	Complex c;
	char ch;
	cout << "Enter a complex number (q to quit): ";
	while (cin >> ch)
	{
		if (ch == 'q' || ch == 'Q')
			break;
		else
		{
			cin >> c;
			cout << "c is " << c << '\n';
			cout << "Complex conjugate is " << ~c << '\n';
			cout << "a is " << a << '\n';
			cout << "a + c is " << a + c << '\n';
			cout << "a - c is " << a - c << '\n';
			cout << "a * c is " << a * c << '\n';
			cout << "2 * c is " << 2 * c << '\n';
		}
		cout << "Enter a complex number (q to quit): ";
	}
	cout << "Done!\n";
	cin.get();
	cin.get();
	return 0;
}
