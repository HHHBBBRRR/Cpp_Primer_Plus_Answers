//ABC.cpp
#include<cstring>
#include "ABC.h"
 
ABC::ABC(const char* l, int r)
{
	label = new char[std::strlen(l) + 1];
	std::strcpy(label, l);
	rating = r;
}
 
ABC::ABC(const ABC& a)
{
	label = new char[std::strlen(a.label) + 1];
	std::strcpy(label, a.label);
	rating = a.rating;
}
 
ABC::~ABC()
{
	delete[] label;
}
 
ABC& ABC::operator=(const ABC& a)
{
	if (this == &a)
	{
		return *this;
	}
 
	delete[] label;
	label = new char[std::strlen(a.label) + 1];
	std::strcpy(label, a.label);
	rating = a.rating;
	return *this;
}
