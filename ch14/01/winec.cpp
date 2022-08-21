#include<iostream>
#include "winec.h"

using std::cin;
using std::cout;
using std::endl;

void Wine::GetBottles()
{
	cout << "Enter " << label << " data for " << years << " year(s): " << endl;
	for (int i = 0; i < years; i++)
	{
		int vintage_years, bottles;
		cout << "Enter year: ";
		cin >> vintage_years;
		cout << "Enter bottles for that year: ";
		cin >> bottles;

		(information.first())[i] = vintage_years;
		(information.second())[i] = bottles;
	}
}

void Wine::Show() const
{
	cout << "Wine: " << label << endl;
	cout << "\t" << "Year\t" << "Bottles\n";
	for (int i = 0; i < years; i++)
	{
		cout << "\t" << (information.first())[i] << "\t" << (information.second())[i] << "\n";
	}
}

int Wine::sum()
{
	int s = 0;
	for (int i = 0; i < years; i++)
	{
		s += (information.second())[i];
	}
	return s;
}
