//Cd.h
#ifndef CD_H_
#define CD_H_

class Cd
{
private:
	char* performers;
	char* label;
	int selections;
	double playtime;
public:
	Cd(const char* p = "null", const char* l = "null", int n = 0, double x = 0.0);
	Cd(const Cd& d);
	virtual ~Cd();
	virtual void Report()const;
	Cd& operator=(const Cd& d);
};

#endif // !CD_H
