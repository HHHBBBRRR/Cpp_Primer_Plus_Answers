//useplorg.cpp -- using the Plorg class
#include<iostream>
#include"Plorg.h"
 
int main()
{
	Plorg one;
	Plorg two("TWO");
	Plorg three("THREE", 30);
 
	one.change(20);
 
	one.show();
	two.show();
	three.show();
 
	return 0;
}
