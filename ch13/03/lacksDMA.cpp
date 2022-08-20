//lacksDMA.cpp
#include<cstring>
#include "lacksDMA.h"
 
using std::cout;
using std::endl;
 
lacksDMA::lacksDMA(const char* c, const char* l, int r)
	: ABC(l, r)
{
	std::strncpy(color, c, 39);
	color[39] = '\0';
}
 
lacksDMA::lacksDMA(const char* c, const ABC& a)
	: ABC(a)
{
	std::strncpy(color, c, COL_LEN - 1);
	color[COL_LEN - 1] = '\0';
}
 
void lacksDMA::View()const
{
	cout << "Label: " << showLabel() << endl;
	cout << "Rating: " << showRating() << endl;
	cout << "Color: " << color << endl;
}
