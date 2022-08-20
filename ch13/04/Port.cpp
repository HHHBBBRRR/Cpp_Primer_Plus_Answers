#include<cstring>
#include "Port.h"
 
using std::cout;
using std::endl;
using std::strlen;
using std::strcpy;
using std::strncpy;
 
Port::Port(const char* br, const char* st, int b)
{
	brand = new char[strlen(br) + 1];
	strcpy(brand, br);
	strncpy(style, st, 19);
	style[19] = '\0';
	bottles = b;
}
 
Port::Port(const Port& p)
{
	brand = new char[strlen(p.brand) + 1];
	strcpy(brand, p.brand);
	strcpy(style, p.style);
	bottles = p.bottles;
}
 
Port& Port::operator=(const Port& p)
{
	if (this == &p)
	{
		return *this;
	}
 
	delete[] brand;
	brand = new char[strlen(p.brand) + 1];
	strcpy(brand, p.brand);
	strcpy(style, p.style);
	bottles = p.bottles;
	return *this;
}
 
Port& Port::operator+=(int b)
{
	bottles += b;
	return *this;
}
 
Port& Port::operator-=(int b)
{
	if (bottles < b)
	{
		cout << "Not available\n";
	}
	else
	{
		bottles -= b;
	}
 
	return *this;
}
 
void Port::Show()const
{
	cout << "Brand: " << brand << endl;
	cout << "Kind: " << style << endl;
	cout << "Bottles: " << bottles << endl;
}
 
std::ostream& operator<<(std::ostream& os, const Port& p)
{
	os << p.brand << ", " << p.style << ", " << p.bottles << endl;
	return os;
}
