#ifndef CPMV_H_
#define CPMV_H_

#include<algorithm>
#include<string>

class Cpmv
{
public:
	struct Info
	{
		std::string qcode;
		std::string zcode;
	};
private:
	Info* pi;
	int theSize;
public:
	Cpmv() : pi{ nullptr }, theSize{ 0 } {}
	Cpmv(std::string q, std::string z, int n = 1);
	Cpmv(const Cpmv& cp);
	Cpmv(Cpmv&& mv);
	~Cpmv();
	Cpmv& operator=(const Cpmv& cp);
	Cpmv& operator=(Cpmv&& mv);
	Cpmv operator+(const Cpmv& obj)const;
	void Display()const;
};

#endif // !CPMV_H_
