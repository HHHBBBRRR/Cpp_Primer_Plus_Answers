//Classic.cpp
#include<iostream>
#include<cstring>
#include "Classic.h"

using std::cout;
using std::endl;
using std::strlen;
using std::strcpy;

Classic::Classic(const char* m, const char* p, const char* l, int n, double x)
	: Cd(p, l, n, x)
{
	major = new char[strlen(m) + 1];
	strcpy(major, m);
}

Classic::Classic(const Classic& c)
	: Cd(c)
{
	major = new char[strlen(c.major) + 1];
	strcpy(major, c.major);
}

Classic::~Classic()
{
	delete[] major;
}

void Classic::Report()const
{
	cout << "Major: " << major << endl;
	Cd::Report();
}

Classic& Classic::operator=(const Classic& c)
{
	if (this == &c)
	{
		return *this;
	}

	Cd::operator=(c);
	delete[] major;
	major = new char[strlen(c.major) + 1];
	strcpy(major, c.major);
	return *this;
}
