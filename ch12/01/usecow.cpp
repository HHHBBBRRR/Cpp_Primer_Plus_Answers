//usecow.cpp
#include<iostream>
#include"Cow.h"
 
using std::cout;
 
int main()
{
	Cow one("Tom", "sax", 35.6);
	cout << one;
 
	Cow two;
	cout << two;
 
	Cow three = one;
	cout << three;
 
	Cow four("Amy", "singing", 42.3);
	four = one;
	cout << four;
 
	return 0;
}
