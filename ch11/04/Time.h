//Time.h
#ifndef TIME_H
#define TIME_H
 
class Time
{
private:
	int hours;
	int minutes;
public:
	Time();
	Time(int h, int m = 0);
 
	friend Time operator+ (const Time& t1, const Time& t2);
	friend Time operator- (const Time& t1, const Time& t2);
	friend Time operator* (const Time& t, double mult);
	friend Time operator* (double mult, const Time& t);
	friend std::ostream& operator<<(std::ostream& os, const Time& t);
};
 
#endif // !TIME_H
