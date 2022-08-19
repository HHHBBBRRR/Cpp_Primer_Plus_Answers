//golf.cpp
#include<iostream>
#include<cstring>
#include "Golf.h"
 
using std::cin;
using std::cout;
using std::endl;
 
Golf::Golf()
{
	char temp[Len];
	int hc;
 
	cout << "Enter fullname: ";
	cin.getline(temp, Len);
	cout << "Enter handicap: ";
	cin >> hc;
 
	*this = Golf(temp, hc);
}
 
Golf::Golf(const char* name, int hc)
{
	strcpy(fullname, name);
	handicap = hc;
}
 
void Golf::sethandicap(int hc)
{
	handicap = hc;
}
 
void Golf::showgolf()
{
	cout << "Name: " << fullname << endl;
	cout << "Handicap: " << handicap << endl;
}
