//Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H
 
#include<iostream>
 
class Complex
{
private:
	double x;
	double y;
 
public:
	Complex();
	Complex(double a, double b = 0.0);
 
	Complex operator+(const Complex& c)const;
	Complex operator-(const Complex& c)const;
	Complex operator*(const Complex& c)const;
	Complex operator*(double n) const;
	Complex operator~();
 
	friend Complex operator*(double n, const Complex& c);
	friend std::istream& operator>>(std::istream& is, Complex& c);
	friend std::ostream& operator<<(std::ostream& os, const Complex& c);
};
 
#endif // !COMPLEX_H
