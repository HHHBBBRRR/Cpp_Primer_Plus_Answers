//usegolf.cpp
#include<iostream>
#include"Golf.h"
 
int main()
{
	Golf g1;
	Golf g2("Li", 10);
 
	g1.sethandicap(20);
 
	g1.showgolf();
	g2.showgolf();
 
	return 0;
}
