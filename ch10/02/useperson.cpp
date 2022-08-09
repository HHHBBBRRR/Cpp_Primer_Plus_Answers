//useperson.cpp
#include<iostream>
#include"Person.h"
 
int main()
{
	Person one;
	Person two("Smythecraft");
	Person three("Dimwiddy", "Sam");
 
	one.Show();
	two.FormalShow();
	three.FormalShow();
 
	return 0;
}
