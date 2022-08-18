//Time.cpp
#include<iostream>
#include "Time.h"
 
Time::Time()
{
	hours = 0;
	minutes = 0;
}
 
Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
}
 
Time operator+ (const Time & t1,const Time &t2)
{
	Time sum;
	sum.hours = t1.hours + t2.hours;
	sum.minutes = t1.minutes + t2.minutes;
	return sum;
}
 
Time operator- (const Time& t1, const Time& t2)
{
	Time diff;
	int tot1, tot2;
	tot1 = t1.minutes + 60 * t1.hours;
	tot2 = t2.minutes + 60 * t2.hours;
	diff.minutes = (tot2 - tot1) % 60;
	diff.hours = (tot2 - tot1) / 60;
	return diff;
}
 
Time operator* (const Time& t, double mult)
{
	Time result;
	int totalminutes = t.hours * mult * 60 + t.minutes * mult;
	result.hours = totalminutes / 60;
	result.minutes = totalminutes % 60;
	return result;
}
 
Time operator* (double mult,const Time& t)
{
	return t * mult;
}
 
std::ostream& operator<<(std::ostream& os, const Time &t)
{
	os << t.hours << " hours, " << t.minutes << " minutes.";
	return os;
}
