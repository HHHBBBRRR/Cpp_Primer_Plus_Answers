#ifndef STONEWT_H_
#define STONEWT_H_

class Stonewt
{
private:
	enum { Lbs_per_stn = 14 };

	int stone;
	double pds_left;
	double pounds;
public:
	Stonewt();
	Stonewt(double lbs);
	Stonewt(int stn, double lbs);
	~Stonewt() {}

	void show_lbs()const;
	void show_stn()const;

	bool operator>(const Stonewt& s);
	bool operator>=(const Stonewt& s);
	bool operator==(const Stonewt& s);

	friend bool operator<(const Stonewt& s1, const Stonewt& s2);
	friend bool operator<=(const Stonewt& s1, const Stonewt& s2);
	friend bool operator!=(const Stonewt& s1, const Stonewt& s2);
};

#endif // !STONEWT_H_
