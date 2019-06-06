#pragma once

class Polynom
{
public:
	Polynom();
	~Polynom(){}

	virtual double area() = 0;
	virtual double per() = 0;
};

class Triangle:public Polynom
{
public:

    Triangle(double a_, double b_, double c_, double h_): a(a_), b(b_), c(c_), h(h_) {}
	~Triangle(){}

	double area();
	double per();

private:
	double  a, b, c, h;

};

class Rectangle : public Polynom
{
public:

	Rectangle(double a_, double b_):a(a_), b(b_) {}
	~Rectangle(){}

	double area();
	double per();
public:
	double a, b;

};