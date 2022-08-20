//ABC.h
#ifndef ABC_H
#define ABC_H
 
#include<iostream>
 
class ABC
{
private:
	char* label;
	int rating;
protected:
	char* showLabel()const { return label; }
	int showRating()const { return rating; }
public:
	ABC(const char* l = "null", int r = 0);
	ABC(const ABC& a);
	virtual ~ABC();
 
	virtual void View()const = 0;
	virtual ABC& operator=(const ABC& a);
};
 
#endif // !ABC_H
