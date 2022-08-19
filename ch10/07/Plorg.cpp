//Plorg.cpp
#include<iostream>
#include "Plorg.h"
 
Plorg::Plorg()
{
	name = "Plorga";
	CI = 50;
}
 
Plorg::Plorg(const std::string& n, int C)
{
	name = n;
	CI = C;
}
 
Plorg::~Plorg() {}
 
void Plorg::show()
{
	std::cout << "Name: " << name << '\n';
	std::cout << "CI: " << CI << '\n';
}
 
void Plorg::change(int C)
{
	CI = C;
}
