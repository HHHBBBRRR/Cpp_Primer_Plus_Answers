//usemove.cpp -- using the Move class
#include<iostream>
#include"Move.h"
 
int main()
{
	Move one(1.3);
	Move two(3.2, 4.6);
	Move three = two.add(one);
 
	three.showmove();
	two.reset();
	two.showmove();
 
	return 0;
}
