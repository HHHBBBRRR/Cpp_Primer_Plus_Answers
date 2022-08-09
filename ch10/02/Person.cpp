//Person.cpp
#include<iostream>
#include<string>
#include<cstring>
#include "Person.h"
 
Person::Person(const std::string& ln, const char* fn)
{
	lname = ln;
	std::strcpy(fname, fn);
}
 
void Person::Show()const
{
	std::cout << fname << '-' << lname << '\n';
}
 
void Person::FormalShow()const
{
	std::cout << lname << "-" << fname << '\n';
}
