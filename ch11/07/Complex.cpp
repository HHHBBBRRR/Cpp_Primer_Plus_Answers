//Complex.cpp
#include "Complex.h"
 
//constructor
Complex::Complex()
{
	x = 0.0;
	y = 0.0;
}
 
Complex::Complex(double a, double b)
{
	x = a;
	y = b;
}
 
//operator overloading
Complex Complex::operator+(const Complex& c) const
{
	Complex sum;
	sum.x = x + c.x;
	sum.y = y + c.y;
	return sum;
}
 
Complex Complex::operator-(const Complex& c) const
{
	Complex diff;
	diff.x = x - c.x;
	diff.y = y - c.y;
	return diff;
}
 
Complex Complex::operator*(const Complex& c) const
{
	Complex mult;
	mult.x = x * c.x - y * c.y;
	mult.y = x * c.y + y * c.x;
	return mult;
}
 
Complex Complex::operator*(double n) const
{
	Complex mult;
	mult.x = x * n;
	mult.y = y * n;
	return mult;
}
 
Complex Complex::operator~()
{
	return Complex(x, -y);
}
 
//friend method:
Complex operator*(double n, const Complex& c)
{
	return c * n;
}
 
std::istream& operator>>(std::istream& is, Complex& c)
{
	std::cout << "real: ";
	is >> c.x;
	std::cout << "imaginary: ";
	is >> c.y;
	return is;
}
 
std::ostream& operator<<(std::ostream& os, const Complex& c)
{
	os << "(" << c.x << "," << c.y << "i)\n";
	return os;
}
