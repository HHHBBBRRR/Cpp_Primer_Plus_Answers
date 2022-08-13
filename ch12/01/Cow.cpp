//Cow.cpp
#include<cstring>
#include "Cow.h"
 
Cow::Cow()
{
	std::strcpy(name, "unknown");
	name[7] = '\0';
	hobby = new char[1];
	hobby[0] = '\0';
	weight = 0.0;
}
 
Cow::Cow(const char* nm, const char* ho, double wt)
{
	std::strcpy(name, nm);
	hobby = new char[strlen(ho) + 1];
	std::strcpy(hobby, ho);
	weight = wt;
}
 
Cow::Cow(const  Cow& c)
{
	std::strcpy(name, c.name);
	hobby = new char[strlen(c.hobby) + 1];
	std::strcpy(hobby, c.hobby);
	weight = c.weight;
}
 
Cow::~Cow()
{
	delete[]hobby;
}
 
Cow& Cow::operator=(const Cow& c)
{
	if (this == &c)
	{
		return *this;
	}
 
	std::strcpy(name, c.name);
	hobby = new char[strlen(c.hobby) + 1];
	std::strcpy(hobby, c.hobby);
	weight = c.weight;
 
	return *this;
}
 
std::ostream& operator<<(std::ostream& os, const Cow& c)
{
	os << "Name: ";
	for (int i = 0; c.name[i] != '\0' && i < 19; i++)
	{
		os << c.name[i];
	}
	os << '\n';
	os << "Hobby: " << c.hobby << '\n'
		<< "Weight: " << c.weight << '\n';
 
	return os;
}
