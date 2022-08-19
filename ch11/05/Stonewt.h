#ifndef STONEWT_H_
#define STONEWT_H_

#include<iostream>

class Stonewt
{
public:
	enum Mode { STONE, POUNDS };
private:
	static const int Lbs_per_stn = 14;

	int stone;
	double pds_left;
	double pounds;
	Mode mode;

	void set_stone();
	void set_pounds();
public:
	Stonewt();
	Stonewt(int stn, double lbs);
	Stonewt(double lbs);
	~Stonewt() {}

	void show_lbs()const;
	void show_stn()const;

	Stonewt operator+(const Stonewt& s)const;
	Stonewt operator-(const Stonewt& s)const;
	Stonewt operator-()const;
	Stonewt operator*(double n)const;

	friend Stonewt operator*(double n, const Stonewt& s);
	friend std::ostream& operator<<(std::ostream& os, const Stonewt& s);
};

#endif // !STONEWT_H_
