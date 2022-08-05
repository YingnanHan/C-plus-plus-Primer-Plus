//vector.h
#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
namespace VECTOR
{
	class Vector
	{
	public:
		enum Mode { RECT, POL };
	private:
		double x;
		double y;
		double mag;
		double ang;
		Mode mode;
		void set_mag();
		void set_ang();
		void set_x();
		void set_y();
	public:
		Vector();
		Vector(double n1, double n2, Mode form = RECT);
		void reset(double n1, double n2, Mode form = RECT);
		~Vector();
		double xval()const { return x; }
		double yval()const { return y; }
		double magval()const { return mag; }
		double angval()const { return ang; }
		void rect_mode();
		void polar_mode();
		Vector operator+(const Vector& b)const;
		Vector operator-(const Vector& b)const;
		Vector operator-()const;
		Vector operator*(double n)const;
		friend Vector operator*(double n, const Vector& a);
		friend ostream& operator<<(ostream& os, const Vector& v);
	};
}
#endif