//Cd.cpp
#include<iostream>
#include<cstring>
#include "Cd.h"

using std::cout;
using std::endl;
using std::strlen;
using std::strcpy;

Cd::Cd(const char* p, const char* l, int n, double x)
{
	performers = new char[strlen(p) + 1];
	strcpy(performers, p);
	label = new char[strlen(l) + 1];
	strcpy(label, l);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd& d)
{
	performers = new char[strlen(d.performers) + 1];
	strcpy(performers, d.performers);
	label = new char[strlen(d.label) + 1];
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::~Cd()
{
	delete[] performers;
	delete[] label;
}

void Cd::Report()const
{
	cout << "Performers: " << performers << endl;
	cout << "Label: " << label << endl;
	cout << "Selections: " << selections << endl;
	cout << "Playtime: " << playtime << endl;
	cout << endl;
}

Cd& Cd::operator=(const Cd& d)
{
	if (this == &d)
	{
		return *this;
	}

	delete[]performers;
	delete[] label;
	performers = new char[strlen(d.performers) + 1];
	strcpy(performers, d.performers);
	label = new char[strlen(d.label) + 1];
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}
