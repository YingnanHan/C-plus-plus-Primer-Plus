//vect.h -- Vector class with <<, mode  state
#ifndef VECTOR_H_
#define VECTOR_H_

#include<iostream>

namespace VECTOR
{
	class Vector
	{
	public:
		enum Mode {
			RECT,
			POL
		};
		// RECT for rectangular, POL for Polar modes
	private:
		double x;		// horizontal values
		double y;		// vertical values
		double mag;		// length of vector
		double ang;		// direction of vector in degrees
		Mode mode;
		//private methods for setting values
		void set_mag();
		void set_ang();
		void set_x();
		void set_y();
	public:
		Vector();
		~Vector();
		Vector(double n1, double n2, Mode form = RECT);
		void Reset(double n1, double n2, Mode form = RECT);
		double xval() const //report x value
		{
			return x;
		}
		double yval() const //report y value
		{
			return y;
		}
		double magval() const // report magnitude
		{
			return mag;
		}
		void polar_mode(); // set mode to POL
		void rect_mode(); // set mode to RECT
		//operator overloading 
		Vector operator+(const Vector& b)const;
		Vector operator-(const Vector& b)const;
		Vector operator-()const;
		Vector operator*(double n)const;
		//firends
		friend Vector operator*(double n, const Vector& a);
		friend std::ostream& operator<<(std::ostream& os, const Vector& v);
	};
}

#endif VECTOT_H_