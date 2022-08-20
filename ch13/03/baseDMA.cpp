//baseDMA.cpp
#include<cstring>
#include "baseDMA.h"
 
using std::cout;
using std::endl;
 
void baseDMA::View()const
{
	cout << "Label: " << showLabel() << endl;
	cout << "Rating: " << showRating() << endl;
}
