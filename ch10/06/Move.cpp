//Move.cpp
#include<iostream>
#include "Move.h"
 
Move::Move()
{
	x = 0.0;
	y = 0.0;
}
 
Move::Move(double a, double b)
{
	x = a;
	y = b;
}
 
void Move::showmove()const
{
	std::cout << "X: " << x << '\n';
	std::cout << "Y: " << y << '\n';
}
 
Move Move::add(const Move& m)const
{
	Move n(0.0, 0.0);
 
	n.x = m.x + x;
	n.y = m.y + y;
 
	return n;
}
 
void Move::reset(double a, double b)
{
	x = a;
	y = b;
}
