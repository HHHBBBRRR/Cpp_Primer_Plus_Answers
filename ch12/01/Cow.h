//Cow.h
#ifndef COW_H_
#define COW_H_
 
#include<iostream>
 
class Cow
{
private:
	char name[20];
	char* hobby;
	double weight;
public:
	Cow();
	Cow(const char* nm, const char* ho, double wt);
	Cow(const Cow& c);
	~Cow();
 
	Cow& operator=(const Cow& c);
 
	friend std::ostream& operator<<(std::ostream& os, const Cow& c);
};
 
#endif // !COW_H_
