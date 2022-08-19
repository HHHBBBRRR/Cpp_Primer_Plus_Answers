//Plorg.h
#ifndef PLORG_H
#define PLORG_H
 
#include<string>
 
class Plorg
{
private:
	std::string name;
	int CI;
public:
	Plorg();
	Plorg(const std::string& n, int C = 50);
	~Plorg();
	void show();
	void change(int C);
};
 
#endif // !PLORG_H
