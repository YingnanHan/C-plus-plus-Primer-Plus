// studentc.h -- defining a Student class using containment
#ifndef STUDENTC_H_
#define STUDENTC_H_

#include<iostream>
#include<string>
#include<valarray>

class Student
{
private:
	typedef std::valarray<double> ArrayDb;
	std::string name;				// contained object
	ArrayDb scores;					// contained object
	//private method for scores output
	std::ostream& arr_out(std::ostream& os)const;
public:
	Student() :name("Null Student"), scores()
	{
		
	}
	explicit Student(const std::string& s) :name(s), scores() // ½ûÖ¹ÒþÊ½¸³Öµ
	{

	}
	explicit Student(int n) :name("Nully"), scores(n) // ½ûÖ¹ÒþÊ½¸³Öµ
	{

	}
	Student(const std::string& s, int n): name(s), scores(n)
	{

	}
	Student(const std::string& s, const ArrayDb& a) :name(s), scores(a)
	{

	}
	Student(const char* str, const double* pd, int n) :name(str), scores(pd, n)
	{

	}
	~Student()
	{

	}
	double Average()const;
	const std::string& Name() const;
	double& operator[](int i);
	double operator[](int i) const;
	
	//firends
	//inputs
	friend std::istream& operator>>(std::istream& is, Student& stu); // 1 word
	friend std::istream& getline(std::istream& is, Student& stu); // 1 line
	//output
	friend std::ostream& operator<<(std::ostream& os, const Student& stu);
};

#endif STUDENTC_H_