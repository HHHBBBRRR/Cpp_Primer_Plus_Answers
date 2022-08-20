//hasDMA.cpp
#include<cstring>
#include "hasDMA.h"
 
using std::cout;
using std::endl;
 
hasDMA::hasDMA(const char* s, const char* l, int r)
	: ABC(l, r)
{
	style = new char[std::strlen(s) + 1];
	std::strcpy(style, s);
}
 
hasDMA::hasDMA(const char* s, const ABC& a)
	: ABC(a)
{
	style = new char[std::strlen(s) + 1];
	std::strcpy(style, s);
}
 
hasDMA::hasDMA(const hasDMA& hs)
	: ABC(hs)
{
	style = new char[std::strlen(hs.style) + 1];
	std::strcpy(style, hs.style);
}
 
hasDMA::~hasDMA()
{
	delete[] style;
}
 
hasDMA& hasDMA::operator=(const hasDMA& hs)
{
	if (this == &hs)
	{
		return *this;
	}
 
	ABC::operator=(hs);
	delete[]style;
	style = new char[std::strlen(hs.style) + 1];
	std::strcpy(style, hs.style);
	return *this;
}
 
void hasDMA::View()const
{
	cout << "Label: " << showLabel() << endl;
	cout << "Rating: " << showRating() << endl;
	cout << "Style: " << style << endl;
}
