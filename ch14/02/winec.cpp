#include<iostream>
#include "winec.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

void Wine::GetBottles()
{
	cout << "Enter " << (const string&)*this << " data for " << years << " year(s): " << endl;
	for (int i = 0; i < years; i++)
	{
		int vintage_years, bottles;
		cout << "Enter year: ";
		cin >> vintage_years;
		cout << "Enter bottles for that year: ";
		cin >> bottles;

		(((Pair&)*this).first())[i] = vintage_years;
		(((Pair&)*this).second())[i] = bottles;
	}
}

void Wine::Show() const
{
	cout << "Wine: " << (const string&)* this << endl;
	cout << "\t" << "Year\t" << "Bottles\n";
	for (int i = 0; i < years; i++)
	{
		cout << "\t" << (((Pair&)*this).first())[i] << "\t" << (((Pair&)*this).second())[i] << "\n";
	}
}

int Wine::sum()
{
	int s = 0;
	for (int i = 0; i < years; i++)
	{
		s += (((Pair&)*this).second())[i];
	}
	return s;
}
