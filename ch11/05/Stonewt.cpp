#include "Stonewt.h"

//private methods
void Stonewt::set_stone()
{
	stone = int(pounds) / Lbs_per_stn;
	pds_left = int(pounds) % Lbs_per_stn;
}

void Stonewt::set_pounds()
{
	pounds = stone * Lbs_per_stn + pds_left;
}

//public methods
Stonewt::Stonewt()
{
	stone = pds_left = pounds = 0;
	mode = POUNDS;
}

Stonewt::Stonewt(double lbs)
{
	pounds = lbs;
	mode = POUNDS;
	set_stone();
}

Stonewt::Stonewt(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	mode = STONE;
	set_pounds();
}

Stonewt Stonewt::operator+(const Stonewt& s) const
{
	return Stonewt(pounds + s.pounds);
}

Stonewt Stonewt::operator-(const Stonewt& s) const
{
	return Stonewt(pounds - s.pounds);
}

Stonewt Stonewt::operator-() const
{
	return Stonewt(-pounds);
}

Stonewt Stonewt::operator*(double n) const
{
	return Stonewt(pounds * n);
}

//friend methods
Stonewt operator*(double n, const Stonewt& s)
{
	return s * n;
}

std::ostream& operator<<(std::ostream& os, const Stonewt& s)
{
	if (s.mode==Stonewt::POUNDS)
	{
		os << s.pounds << " pounds\n";
	}
	else if (s.mode==Stonewt::STONE)
	{
		os << s.stone << " stone, " << s.pds_left << " pounds\n";
	}
	else
	{
		os << "Stone object mode is invalid";
	}
	return os;
}
